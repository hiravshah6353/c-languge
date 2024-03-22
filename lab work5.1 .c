Q.1 Write a Program to find the minimum number from the given 2 numbers using if else.

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check which number is smaller
    if (num1 < num2) {
        printf("Minimum number is: %d\n", num1);
    } else {
        printf("Minimum number is: %d\n", num2);
    }

    return 0;
}

output;

Enter first number: 40
Enter second number: 55
Minimum number is: 40

Q.2 Write a Program to find if a given number is neutral or not using a ladder if else


#include <stdio.h>

int main() {
    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is neutral or not
    if (number == 0) {
        printf("%d is neutral.\n", number);
    } else if (number > 0) {
        printf("%d is positive.\n", number);
    } else {
        printf("%d is negative.\n", number);
    }

    return 0;
}

outout;
Enter a number: 45
45 is positive.
__________________
Enter a number: 0
0 is neutral.
__________________
Enter a number: -48
-48 is negative.
