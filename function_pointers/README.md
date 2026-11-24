## C - Function pointers

#### Projects

- Add files `function_pointers.h`
- Add files `0-print_name.c`
- Add files `1-array_iterator.c`
- Add files `2-int_index.c`
- Add files `3-main.c`, `3-calc.h`, `3-get_op_func.c`, `3-op_functions.c`, `calc`

#### Calculator

- This Project is a simple calculator. This task introduced several new concepts which we had to research and discover how to create & define data structures, apply the structure in a function, write function prototypes and organise a program across multiple files.

- `3-calc.h` file is the preprocessor header file which contains the prototypes for our function and the op_t structure used by the program.

- `3-op_functions.c` file contains the five functions the calcultor requires for addition, subtraction, multiplication, division and modulo, which then returns the result of the calculation required. 

- `3-get_op_func.c` file selects and returns the function for the given operator. The array is created within the local function, and if the operation matches the result it returns the operation, otherwise it returns null if the operation input isn't include in the array.

- `3-main.c` contains the program’s `main` function. The calculator expects three user-supplied arguments: a number, an operator, and another number. Including the program name, `argc` should be `4`. The program prints the calculation result on success.

- `calc` file is the executable file to use. Run the file with command `./calc 4 + 4`. 
The shell treats the `*` as a wildcard, therefore the command for multiplication use is `./calc 4 \* 4` or `./calc 4 '*' 4` as an example. 

