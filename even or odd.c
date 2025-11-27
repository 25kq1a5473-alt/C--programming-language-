#include <stdio.h>

// Function declaration/prototype
void checkEvenOrOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}

int main() {
    int number;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function
    checkEvenOrOdd(number);

    return 0;
}