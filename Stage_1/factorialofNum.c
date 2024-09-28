#include <stdio.h>

int main() {
    int num;
    int factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Error handling for negative numbers
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using for loop
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Output the result
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}
