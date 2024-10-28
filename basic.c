#include <stdio.h>
#include <stdlib.h>

// Define a function that takes two parameters: an integer and a pointer to a character array.
int main(int argc, char *argv[]) {
    // Print a greeting message to the console.
    printf("Hello World!");         // Print "Hello World!" to the console.
    
    if(check_numbers(argc, argv)) {
        return 1;
    }

    int i;                          // Initialize an integer variable named 'i'.
    for (i = 0; i < argc; i++) {    // Loop through each argument in the command-line arguments array.
        printf("%s ", argv[i]);     // Print each command-line argument followed by a space character.
    }
    printf("\n");                   // Print a newline character to move the cursor to the next line.
    return 0;                       // Return an exit status of 0, indicating successful execution.
}

// Define a function that checks if all elements in an array are digits.
int check_numbers(int n, char **strings) {
    int result = 0;                 // Initialize a variable to store the result (0 for success, 1 for failure).
    for (int j = 0; j < n; j++) {   // Loop through each string in the array.
        char *str = strings[j];     // Assign the current string to a temporary character pointer named 'str'.
        if (!isdigit(str)) {        // Check if the string contains non-digit characters.
            result = 1;             // Set the result variable to 1 (failure) and break out of the loop.
            break;
        }
    }
    return result;                  // Return the result value.
}


// This function sorts an array of integers using the bubble sort algorithm.
// It takes two parameters: a pointer to an array of integers and the number of elements in the array.
int bubbleSort(int *arr, int n) { // Function declaration
                                            // Initialize variables for the outer loop.
    int i;                                  // Loop variable for the outer loop
                                            // Iterate through each element in the array (excluding the last element).
    for (i = 0; i < n - 1; i++) {           // Outer loop
                                            // Initialize variables for the inner loop.
        int j;                              // Loop variable for the inner loop
        int temp;                           // Temporary variable for swapping elements
                                            // Iterate through each element in the array, comparing adjacent elements and swapping them if necessary.
        for (j = 0; j < n - i - 1; j++) {   // Inner loop
            if (arr[j] > arr[j + 1]) {      // Check if the current element is greater than the next one
                temp = arr[j];              // Store the current element in a temporary variable
                arr[j] = arr[j + 1];        // Swap the elements
                arr[j + 1] = temp;          // Swap the elements back
            }
        }
    }
    // The function returns the sorted array.
    return arr;
}
