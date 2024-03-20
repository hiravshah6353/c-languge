1)write a program to swap two variable using third variable
 
#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  
  printf("Enter second number: ");
  scanf("%lf", &second);
  
  temp = first;
  first = second;
  second = temp;

  
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}

2) write a program to variable without using third  variable

#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;
b=a-b;    
a=a-b;
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   

3)Write a Program to find the formula's answer (x+y)^2

#include <stdio.h>

int main() {
    float x, y, result;
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);

    (x + y)^2
    result = (x + y) * (x + y);
   printf("(x + y)^2 = %.2f\n", result);

    return 0;
}


4) Write a Program to find the formula's answer (x-y)^2 

#include <stdio.h>

int main() {
    float x, y, result;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    (x - y)^2
    result = (x - y) * (x - y);
    printf("(x - y)^2 = %.2f\n", result);

    return 0;
}

5) Write a Program to find the formula's answer (x+y)^3

#include <stdio.h>

int main() {
    float x, y, result;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    result = (x + y) * (x + y) * (x + y);

    printf("(x + y)^3 = %.2f\n", result);

    return 0;
}

