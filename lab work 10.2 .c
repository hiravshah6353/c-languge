.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
#include <stdio.h>

int sumArrayElements(int arr[], int size);

int main() {
    int size, i;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int array[size];
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    int totalSum = sumArrayElements(array, size);
    printf("The sum of the array elements is: %d\n", totalSum);
    
    return 0;
}

int sumArrayElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
output;
/tmp/LZzZRCAUIf.o
Enter array size: 5
Enter array elements:
a[0] = 1
a[1] = 2
a[2] = 4
a[3] = 3
a[4] = 5
The sum of the array elements is: 15


=== Code Execution Successful ===
Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.
#include <stdio.h>


int stringLength(const char *str);

int main() {
    char str[100];  
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
   
    int length = stringLength(str);
    
    if (length > 0 && str[length-1] == '\n') {
        str[length-1] = '\0';  
        length--;              
    }

   
    printf("The length of the string is: %d\n", length);
    
    return 0;
}

int stringLength(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}
output;
/tmp/JLghwaEr0Q.o
Enter a string: front end developer
The length of the string is: 19


=== Code Execution Successful ===