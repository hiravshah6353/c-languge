Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do do-while loop. in c language

#include <stdio.h>

int main() {
    char letter = 'a';
    
    do {
        printf("%c ", letter);
        letter += 3;
    } while(letter <= 'z');
    
    printf("\n");
    
    return 0;
}

Q.2 Write a Program to count the total number of digits in a number.
#include <stdio.h>

int main() {
    long long num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    while (num != 0) {
        num /= 10;
        ++count;    
    }
    
    printf("Total number of digits: %d\n", count);
    
    return 0;
}
Q.3 Write a Program to find the sum of the first and the last digit of a number.
#include <stdio.h>

int sum_of_first_and_last_digit(int number) {
    int first_digit, last_digit, num = number;
    
    last_digit = num % 10;
    
    while (num >= 10) {
        num /= 10;
    }
    first_digit = num;
    int sum_digits = first_digit + last_digit;
    
    return sum_digits;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = sum_of_first_and_last_digit(number);
    printf("Sum of the first and last digit: %d\n", result);
    
    return 0;
}
