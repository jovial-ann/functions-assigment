#include <stdio.h>  // Include the standard input/output library for using printf
#include <stdlib.h> // Include the standard library for using EXIT_SUCCESS

int main(void)
{
    // Declaration of an integer variable 'some_int' and initialization to 10
    int some_int = 10;
    // Declaration of an integer pointer 'memory_location' and assignment to the address of 'some_int'
    int* memory_location = &some_int;

    // Declaration of a float variable 'some_float' and initialization to 10.0
    float some_float = 10.0f;
    // Declaration of a float pointer 'f_memory_location' and assignment to the address of 'some_float'
    float* f_memory_location = &some_float;

    // Printing the value of 'some_int' and its memory address
    printf("The value of my integer is %d, and it is located at memory address %p\n", some_int, memory_location);
    // Printing the value of 'some_float' and its memory address
    printf("The value of my float is %f, and it is located at memory location %p\n", some_float, f_memory_location);

    // Dereferencing 'memory_location' to get the value of 'some_int' and storing it in 'my_deferenced_value'
    int my_deferenced_value = *memory_location;
    // Printing the dereferenced value
    printf("The dereferenced value is %d\n", my_deferenced_value);

    return EXIT_SUCCESS; // Return EXIT_SUCCESS to indicate the program ended successfully
}
