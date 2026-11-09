#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;
    clock_t start_time; /* clock_t is the type, start_time is the variable name */
    clock_t end_time; 
    clock_t build_start_time;
    clock_t build_end_time;
    clock_t process_start_time;
    clock_t process_end_time;
    clock_t reduce_start_time;
    clock_t reduce_end_time;
    clock_t total_build_time;
    clock_t total_process_time;
    clock_t total_reduce_time;
    double build_seconds;
    double process_seconds;
    double reduce_seconds;
    clock_t total_time;
    double total_time_seconds;

    /* Students must add clock-based timing and print required lines. */
    start_time = clock(); /* time reading before build process starts */
    build_dataset();
    end_time = clock(); /* end time is needed after dataset to capture time spent on the build process */
    build_start_time = start_time; /* stores start_time to the variable build_start_time */
    build_end_time = end_time; /* stores end_time to the variable build_end_time */
    start_time = clock(); /* will get a new reading and replace the old value in start_time */
    process_dataset();
    end_time = clock(); /* stores the end time of process to end_time */
    process_start_time = start_time; /* stores the start time to the process_start_time variable */
    process_end_time = end_time; /* stores the end time to the process_end_time variable */
    start_time = clock();
    checksum = reduce_checksum();
    end_time = clock();
    reduce_start_time = start_time; /* stores the start reduced time */
    reduce_end_time = end_time; /* stores the end reduced time */

    total_build_time = build_end_time - build_start_time; /* this calculates the total time for build dataset */
    total_process_time = process_end_time - process_start_time; /* this calculates the total time for process dataset */
    total_reduce_time = reduce_end_time - reduce_start_time; /* this calculates the total time for reduced dataset */

    /* converts the time into seconds using double type / CLOCKS_PER_SEC is a constant from time.h */
    build_seconds = (double)total_build_time / CLOCKS_PER_SEC;
    process_seconds = (double)total_process_time / CLOCKS_PER_SEC;
    reduce_seconds = (double)total_reduce_time / CLOCKS_PER_SEC;

    /* Covers the whole process time from the start of Build to the end of Reduce */
    total_time = reduce_end_time - build_start_time;
    total_time_seconds = (double)total_time / CLOCKS_PER_SEC;

    if (checksum == 0ul)
        printf("impossible\n");

    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     *
     * below prints the required output as listed above.
     */

    printf("TOTAL seconds: %.6f\n", total_time_seconds);
    printf("BUILD_DATA seconds: %.6f\n", build_seconds);
    printf("PROCESS seconds: %.6f\n", process_seconds);
    printf("REDUCE seconds: %.6f\n", reduce_seconds);

    return 0;
}
