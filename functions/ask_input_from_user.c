#include <stdio.h>  // Include the standard input/output library for using printf and scanf
#include <stdlib.h> // Include the standard library for using EXIT_SUCCESS

// Function prototype for ask_input_from_user
int ask_input_from_user(void);

int main(void)
{
    // This variable declaration is not used in the program and can be removed
    // int some_int;

    // Ask for input from the user, then assign the value to input_value
    int input_value = ask_input_from_user();
    // Print the value entered by the user
    printf("User entered %d\n", input_value);
    
    // Ask for input again and print it
    input_value = ask_input_from_user();
    printf("User entered %d\n", input_value);

    // Return EXIT_SUCCESS to indicate the program ended successfully
    return EXIT_SUCCESS;
}

// Function that prompts the user for input and returns the entered integer
int ask_input_from_user(void)
{
    int input = 0; // Initialize the input variable to store the user's input
    // Prompt the user to enter a number. The use of ____\b\b\b\b is a visual cue for where to type.
    printf("Please enter a number ____\b\b\b\b");
    // Read the user's input from the console and store it in the variable 'input'
    scanf("%d", &input);

    // Return the input value to the calling function
    return input;
}
