Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.
#include <stdio.h>
int main() {
    int num1, num2, num3, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2) {
        if (num1 < num3) {
            min = num1;
        } else {
            min = num3;
        }
    } else {
        if (num2 < num3) {
            min = num2;
        } else {
            min = num3;
        }
    }
    printf("Minimum number is: %d\n", min);

    return 0;
}

outout;
Enter three numbers: 35
93
80
Minimum number is: 35
 flow chart;
Start
|
V
Input three numbers: num1, num2, num3
|
V
if (num1 < num2)
|
V
   if (num1 < num3)
   |
   V
      min = num1
   |
   V
   else
   |
   V
      min = num3
   |
   V
else
|
V
   if (num2 < num3)
   |
   V
      min = num2
   |
   V
   else
   |
   V
      min = num3
   |
   V
Print "Minimum number is: min"
|
V
End


Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.

#include <stdio.h>

int main() {
    int num1, num2, num3, num4, max;
    
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                max = num1;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                max = num2;
            } else {
                max = num4;
            }
        } else {
            if (num3 > num4) {
                max = num3;
            } else {
                max = num4;
            }
        }
    }
    printf("Maximum number is: %d\n", max);

     return 0;
}

flow chart;
Start
|
V
Input four numbers: num1, num2, num3, num4
|
V
if (num1 > num2)
|
V
   if (num1 > num3)
   |
   V
      if (num1 > num4)
      |
      V
         max = num1
      |
      V
      else
      |
      V
         max = num4
      |
      V
   else
   |
   V
      if (num3 > num4)
      |
      V
         max = num3
      |
      V
      else
      |
      V
         max = num4
      |
      V
else
|
V
   if (num2 > num3)
   |
   V
      if (num2 > num4)
      |
      V
         max = num2
      |
      V
      else
      |
      V
         max = num4
      |
      V
   else
   |
   V
      if (num3 > num4)
      |
      V
         max = num3
      |
      V
      else
      |
      V
         max = num4
      |
      V
Print "Maximum number is: max"
|
V
End


output;
Enter four numbers: 45
67
78
99
Maximum number is: 99