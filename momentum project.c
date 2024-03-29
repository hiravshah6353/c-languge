
Q.1 Write a Program to check whether a number is even or odd using the ternary operator.
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is Even.\n", num) : printf("%d is Odd.\n", num);
    
    return 0;
}

output;
Enter a number: 8
8 is Even.
Enter a number:7
7 is odd.
Q.2 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill

#include <stdio.h>

int main() {
    float units, total_bill, surcharge = 0.0;

    printf("Enter the total units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units <= 150) {
        total_bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    surcharge = total_bill * 0.20; // 20% surcharge
    total_bill += surcharge;

    printf("Total Electricity Bill: Rs. %.2f\n", total_bill);

    return 0;
}
output;

Enter the total units consumed: 250
Total Electricity Bill: Rs. 264.00


=== Code Execution Successful ===