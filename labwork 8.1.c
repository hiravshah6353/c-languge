Q.1 Write a Program to find the length of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 3
a[1] = 7
a[2] = 1
a[3] = 8
a[4] = 6
code;
#include <stdio.h>
int main() {
    int n; 

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("The length of the array is: %d\n", n);

    return 0;
}

Q.2 Write a Program to find the average of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 18
a[3] = 50
a[4] = 26
code;
#include <stdio.h>

int main() {
    int n; 
    float sum = 0.0, average; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i]; 
    }

    average = sum / n;

    printf("The average of the array is: %.2f\n", average);

    return 0;
}
Q.3 Write a Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.
For example,
Input:
Enter array size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 1
b[3] = 7
b[4] = 3

code;
#include <stdio.h>

int main() {
    int n; 

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int a[n], b[n], sum[n]; 
    
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d of array 1: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d of array 2: ", i + 1);
        scanf("%d", &b[i]);
    }

    
    for (int i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }

    
    printf("Result of the addition of the two arrays:\n");
    for (int i = 0; i < n; i++) {
        printf("sum[%d] = %d\n", i, sum[i]);
    }

    return 0;
}

