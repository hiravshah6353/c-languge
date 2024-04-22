
Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
#include <stdio.h>
void squareArray(int *arr, int size) {
    int *ptr = arr; 
    for (int i = 0; i < size; i++) {
        *ptr = (*ptr) * (*ptr); 
        ptr++; 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    squareArray(arr, size);

    printf("Squared array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

output;
Original array: 1 2 3 4 5 
Squared array: 1 4 9 16 25
Q.2 Write a Program to swap two variables using Pointers.
code;
#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a , b;
    printf("enter value of a");
    scanf("%d",&a);
    printf("eenter value of b");
    scanf("%d",&b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
output;
enter value of a12
eenter value of b116
Before swapping: a = 12, b = 116
After swapping: a = 116, b = 12
 


=== Code Execution Successful ===