Q.1 Write a Program to find all the negative elements from a given 1D array.
code;
#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the array's size: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Negative elements in the array are:\n");
    for (i = 0; i < size; i++) {
        if (a[i] < 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}
Q.2 Write a Program to find the largest element from a given 2D array.
code;
#include <stdio.h>
#include <limits.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int max = INT_MIN;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];        }
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0;
}
           

Q.3 Write a Program to find the transpose matrix of a given 2D array.
code;
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
code;
#include <stdio.h>

int main() {
    int rows, cols, i, j, row_index, col_index, row_sum = 0, col_sum = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter row and column index for sum calculation: ");
    scanf("%d %d", &row_index, &col_index);

    for (j = 0; j < cols; j++) {
        row_sum += arr[row_index][j];
    }
    for (i = 0; i < rows; i++) {
        col_sum += arr[i][col_index];
    }

    printf("Sum of row %d = %d\nSum of column %d = %d\n", row_index, row_sum, col_index, col_sum);
    return 0;
}
S
