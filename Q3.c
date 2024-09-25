#include <stdio.h>
#include <stdlib.h>
 
// Function to divide two numbers and handle division by zero
float divide(float numerator, float denominator) {
    if (denominator == 0) {
        fprintf(stderr, "Error: Division by zero.\n");
        exit(EXIT_FAILURE);
    }
    return numerator / denominator;
}
 
int main() {
    float a = 10.0, b = 0.0;
    printf("Result: %.2f\n", divide(a, b)); // This will print an error message and exit the program
    return 0;
}