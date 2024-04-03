1 Write a Program to print 1 to 10 using a while loop

#include <stdio.h>

int main() {
    int i = 1; 

    while (i <= 10) {
        printf("%d ", i); // Print the current number
        i++; 
    }

    return 0;
}

2 Write a Program to print 10 to 1 using a while loop.

#include <stdio.h>

int main() {
    int i = 10; 
    while (i >= 1) {
        printf("%d ", i); 
        i--; 
    }

    return 0;
}
3 Write a Program to print 1 to N using a while loop

#include <stdio.h>

int main() {
    int N,num = 1;;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    while (num <= N) {
        printf("%d ", num);
        num++; 
    }

    return 0;
}

4 Write a Program to print odd numbers from N to 1 using a while loop.
#include <stdio.h>

int main() {
  int number, n;
  
  number = 1;
    printf("Enter the value of N: ");
    scanf("%d", & n);
  printf("Odd Numbers from 1 to %d:\n", n);
  while (number <= n) {
   if (number % 2 != 0)
      printf("%d ", number);
    number++;
  }

  return 0;
}

Q.5 Write a Program to print leap years between two given numbers using a while loop.

#include <stdio.h>
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int first_year, second_year;

    
    printf("Enter the first number: ");
    scanf("%d", &first_year);
    printf("Enter the second number: ");
    scanf("%d", &second_year);
    int year = first_year;

    printf("Leap years between %d and %d are:\n", first_year, second_year);
    while (year <= second_year) {
        if (is_leap_year(year)) {
            printf("%d\n", year);
        }
        year++;
    }

    return 0;
}
