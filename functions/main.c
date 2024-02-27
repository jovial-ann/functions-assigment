#include <stdio.h>
#include <stdlib.h>

// A function is a named block of code that executes some well-defined logic.
// In C, a function definition needs to contain the following:
//
// 1. The return trype (can be any data type. If your function is not going to return a value),
//   use `void`
//
// 2. The name of the function
//
// 3. Parameter list (if any). If no parameters will be passed, use `void`


// Function declaration for 'adder'. This function takes an integer as input and does not return any value (void).
void adder(int value)
{
    int my_integer = 0; // Initialize a local variable 'my_integer' with 0

    int result = my_integer + value; // Add the value passed as argument to 'my_integer' and store in 'result'

    // Print the result of the addition
    printf("The result is %d\n", result);
}

// The main function - entry point of the program
int main(void)
{
    // Call the 'adder' function with an argument of 0
    adder(0);
    // Call the 'adder' function with an argument of 1
    adder(1);
    // Call the 'adder' function with an argument of the result of 5 multiplied by 4 (20)
    adder(5 * 4);

    // Return EXIT_SUCCESS to indicate that the program finished successfully
    return EXIT_SUCCESS;
}