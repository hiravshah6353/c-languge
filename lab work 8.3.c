Q.1 Write a Program to find the average of a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
code;
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    float sum = 0, average;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += a[i][j];
        }
    }

    average = sum / (rows * cols);

    printf("The average of the array elements is: %.2f\n", average);

    return 0;
}
Q.2 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
code;
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];

    printf("Enter elements for first array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr1[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements for second array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr2[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Result of addition:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.
code;
#include <stdio.h>

int main() {
    int rows, cols, i, sum = 0;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements for the array:\n");
    for (i = 0; i < rows * cols; i++) {
        printf("arr[%d][%d] = ", i / cols, i % cols);
        scanf("%d", &arr[i / cols][i % cols]);
        if (i / cols == i % cols) {
            sum += arr[i / cols][i % cols];
        }
    }

    printf("The sum of diagonal elements is: %d\n", sum);

    return 0;
}
Q.4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
code;
include <stdio.h>

int main() {
    int rows = 5, cols = 5, i, j, sum = 0;

    int arr[5][5];

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Output:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d\t", arr[i][j]);
                sum += arr[i][j];
            } else {
                printf("  \t");
            }
        }
        printf("\n");
    }

    printf("The sum of all boundary elements is: %d\n", sum);

    return 0;
}