#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the input is valid
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}

