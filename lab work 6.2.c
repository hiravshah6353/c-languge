Q.1 Write a Program to print 1 to 10 using a do-while loop.

#include <stdio.h>

int main() {
    int i = 1; 
    do {
        printf("%d ", i); 
        i++; 
    } while (i <= 10); 
    
    return 0;
}

output;
/tmp/qECAtjntva.o
1 2 3 4 5 6 7 8 9 10 

=== Code Execution Successful ===
Q.2 Write a Program to print 10 to 1 using a for loop.

#include <stdio.h>

int main() {
    
    for (int i = 10;i >= 1; i--) {
        printf("%d ", i); 
    }
    
    return 0;
}

output;

/tmp/ynMIsFus5b.o
10 9 8 7 6 5 4 3 2 1 

=== Code Execution Successful ===
Q.3 Write a Program to print even numbers from 1 to N using a do-while loop.

#include <stdio.h>
int main() {
    int N;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    int i = 1;
    
    do {
        if (i % 2 == 0) {
            printf("%d ", i); 
        }
        i++;
    } while (i <= N); 
    
    return 0;
}

output;
/tmp/OKwdbcTAOZ.o
Enter the value of N: 14
2 4 6 8 10 12 14 

=== Code Execution Successful ===
Q.4 Write a Program to print the Fibonacci series up to N numbers using a for loop.

#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("Fibonacci Series up to %d terms:\n", N);

    
    for (int i = 0; i < N; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}

output;
/tmp/diCkWNmzGt.o
Enter the number of terms: 6
Fibonacci Series up to 6 terms:
0 1 1 2 3 5 

=== Code Execution Successful ===