Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
code;
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], mergedArr[200];
    int size1, size2, mergedSize;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter elements of first array: ");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    printf("Enter elements of second array: ");
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergedSize = size1 + size2;
    for(int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for(int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for(int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
code;
#include <stdio.h>

int main() {
    int startYear, endYear;
    printf("Enter starting year: ");
    scanf("%d", &startYear);
    printf("Enter ending year: ");
    scanf("%d", &endYear);

    int leapYears[100]; 
    int count = 0;

    for (int year = startYear; year <= endYear; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leapYears[count] = year;
            count++;
        }
    }

    printf("Leap years between %d and %d are: ", startYear, endYear);
    for (int i = 0; i < count; i++) {
        printf("%d ", leapYears[i]);
    }

    return 0;
}
Q.3 Write a Program to find square of each element from the given array.
code;
#include <stdio.h>

int main() {
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Squares of each element in the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }

    return 0;
}