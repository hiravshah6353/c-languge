Q.1 Write a Program to find the length of a string using a Pointer.
#include <stdio.h>

int stringLength(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = stringLength(str);
    printf("Length of the string is: %d\n", length);

    return 0;
}
output;
Enter a string: hello
Length of the string is: 5


=== Code Execution Successful ===
Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
#include <stdio.h>

void findCubes(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(arr + i * cols + j) = (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j));
        }
    }
}

int main() {
    int rows, cols;
    
    printf("Enter the number of rows and columns in the 2D array: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols];
    
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    findCubes(&arr[0][0], rows, cols);
    
    printf("Cubes of all elements in the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
outout;
Enter the number of rows and columns in the 2D array: 2
1
Enter the elements of the 2D array:
2
3
Cubes of all elements in the 2D array:
8 
27 


=== Code Execution Successful ===
