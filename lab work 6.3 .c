.1 Write a Program to print the sum of all numbers from 1 to N using for loop.
#include <stdio.h>


int main() {
    int N, sum = 0;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Loop to calculate the sum
    for (int i = 1; i <= N; i++) {
        sum += i; // Add current value of i to sum
    }

    // Print the sum
    printf("Sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}

output;
/tmp/dM88Efgh5Z.o
Enter the value of N: 5
Sum of numbers from 1 to 5 is: 15


=== Code Execution Successful ===
Q.2 Write a Program to print the factorial of number N using for loop
#include <stdio.h>

int main() {
    int N;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    
    if (N < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %lld\n", N, factorial);
    }

    return 0;
}

output;
/tmp/lE5iVP9aPG.o
Enter a positive integer: 5
Factorial of 5 is: 120


=== Code Execution Successful ===
Q.3 Write a Program to print the multiplication table of the number N using any type of loop.
#include <stdio.h>

int main() {
    int N;
    printf("Enter the number to print its multiplication table: ");
    scanf("%d", &N);

    printf("Multiplication table of %d:\n", N);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}

output;
/tmp/EKXyKxzx2c.o
Enter the number to print its multiplication table: 8
Multiplication table of 8:
8 x 1 = 8
8 x 2 = 16
8 x 3 = 24
8 x 4 = 32
8 x 5 = 40
8 x 6 = 48
8 x 7 = 56
8 x 8 = 64
8 x 9 = 72
8 x 10 = 80


=== Code Execution Successful ===
