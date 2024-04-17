Q.1 Write a Program to find the cube of a given number using UDF
code;
#include <stdio.h>

double cube(double number) {
    return number * number * number;
}

int main() {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);  

    result = cube(num);  
    printf("The cube of %.2f is %.2f\n", num, result);

    return 0;
}
output;
Enter a number: 6
The cube of 6.00 is 216.00


=== Code Execution Successful ===
Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.
code;
#include <stdio.h>

// Function to check if the number is divisible by both 3 and 5
int isDivisibleByBoth3And5(int number) {
    return (number % 3 == 0) && (number % 5 == 0);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);  // Reading an integer from user

    // Calling the function and checking the divisibility
    if (isDivisibleByBoth3And5(num)) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }

    return 0;
}
output;
Enter a number: 16
16 is not divisible by both 3 and 5.

Enter a number: 15
15 is divisible by both 3 and 5.

