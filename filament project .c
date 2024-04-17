Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
code;
#include <stdio.h>
int isPalindrome(char str[]) {
    int start = 0;
    int end;

    for (end = 0; str[end] != '\0'; ++end);
    end -= 1; 
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }

    return 1; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    if (str[0] != '\n') {
        int i;
        for (i = 0; str[i] != '\n'; i++);
        str[i] = '\0'; 
    }

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

output;
Enter a string: d
"d" is a palindrome.


=== Code Execution Successful ===
Q.2 Write a Program to count the frequency of each character in a given string
code;
#include <stdio.h>

#define ASCII_SIZE 256 

int main() {
    char str[1000];
    int freq[ASCII_SIZE] = {0}; 
    int i = 0;

     printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    
    while (str[i] != '\0') {
        if (str[i] != '\n') {  
            freq[(unsigned char)str[i]]++; 
        }
        i++;
    }

    printf("Character frequencies:\n");
    for (i = 0; i < ASCII_SIZE; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
outout;
/tmp/l54veljXrC.o
Enter a string: developer
Character frequencies:
'd' : 1
'e' : 3
'l' : 1
'o' : 1
'p' : 1
'r' : 1
'v' : 1


=== Code Execution Successful ===
