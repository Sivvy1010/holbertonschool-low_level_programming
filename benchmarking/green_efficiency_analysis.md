# *Green Efficiency Analysis Report*

## Measurement Methodolgy

For this project we were assigned code, where we had to measure the time each process was taking, then have the data output for each time spent then the total time the duration of the whole process spent. 
To do this I used `clock()`, a function to take a reading of the time the process began, then again after that process was finished. This was used for each of the three processes.
The readings were stored using `clock_t` type to store raw clock values. The use of `CLOCKS_PER_SEC` was used to convert the variables into a floating decimal. 
I then subtracted the end time from the start time, which gave me the time each process took to complete which covered the three processes. The total time was calculated using the final process end time and subtracting that with the start time of the first process.
___

## Observed Performance Differences

After running the file and performing our test of each process we get the following values:\

`-TOTAL seconds: 0.000458`\
`-BUILD_DATA seconds: 0.000169`\
`-PROCESS seconds: 0.000208`\
`-REDUCE seconds: 0.000079`\

After having been provided with the results we can see that:\
`BUILD_DATA` took `0.000169` seconds\
`PROCESS` took the longest time at `0.000208` seconds\
`REDUCE` phase took the least amount of time with `0.000079` seconds\
`TOTAL` amount of time take was `0.000458` seconds.\

___

## Relation Between Runtime and Energy Consumption

This project was designed around runtime, calculating how long each process took to complete. The total runtime of the program was `1.000458` seconds with the `PROCESS` phase taking the longest time to complete, which in turn may have used the most energy consumption.\

___

## Limitations of the Experiment

- My calculations was based on a small test runs of 3 times with results varying in a range of `0.000458` to `0.000489` seconds in timing differences. (*see output file for results*)\
- The test was ran on only 1 system, so varying hardware on other systems may contribute to different outcomes.\
- The test did not test energy consumption, it only tested runtimes.\

___

## Practical Engineering Takeaway

The project measured runtime on the three different processes in the program, and identified which process took the longest. Longer processing time can potentionally increase energy use. Writing efficient code is good practice because it can reduce unnecessary runtimes, creating less processing power on the hardware.\
