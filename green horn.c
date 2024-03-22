 1)Write C program to convert temperature from degree Celsius to Fahrenheit.
    The formula to convert Celsius to Fahrenheit is given by: °F = °C × (9/5) + 32.

#include <stdio.h>
int main(){
    float celsius, fahrenheit;
M    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf(" fahrenheit = %.2f",fahrenheit);
    return 0;
}

output;
Enter temperature in Celsius: 20
 fahrenheit = 68.00

=== Code Execution Successful ===
Q.2 Write a C Program to find gross salary by adding % of HRA, DA, and TA of user choice

#include<stdio.h>
int main(){
    float basic, da_percent, hra_percent, da, hra,ta_percent,ta, gross_salary;
    
    printf("Enter the basic pay: ");
    scanf("%f",&basic);
    printf("Enter the DA percentage: ");
    scanf("%f",&da_percent);
    printf("Enter the HRA percentage: ");
    scanf("%f",&hra_percent);
    printf("Enter the TA percentage: ");
    scanf("%f",&ta_percent);
    
    hra = (basic * hra_percent) / 10;
   ta = (basic * ta_percent) /8;
     da=(basic*da_percent)/5;
    
    gross_salary = basic + da + hra+ ta;
    
    
    printf("Gross salary of the employee is: %.2f", gross_salary);
    return 0;
}


Q.3 Write a C Program to find the third angle of a right triangle if two other angles are given.

#include <stdio.h>

int main()
{
    int a, b, c;

    
    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);

    c = 180 - (a + b);

    printf("Third angle of the triangle = %d", c);

    return 0;

 output;
 Enter two angles of triangle: 90
60
Third angle of the triangle = 30

=== Code Execution Successful ===
}
