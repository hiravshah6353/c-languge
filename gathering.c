Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
code;

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main() {
    char choice;
    int num1, num2;
    
    do {
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        
        printf("Choose an operation (+, -, *, /, %%): ");
        scanf(" %c", &choice);
        
        switch(choice) {
            case '+':
                printf("Result: %d\n", add(num1, num2));
                break;
            case '-':
                printf("Result: %d\n", subtract(num1, num2));
                break;
            case '*':
                printf("Result: %d\n", multiply(num1, num2));
                break;
            case '/':
                printf("Result: %.2f\n", divide(num1, num2));
                break;
            case '%':
                printf("Result: %d\n", modulus(num1, num2));
                break;
            default:
                printf("Invalid operation!\n");
        }
        
        printf("Press 'q' to quit or any other key to continue: ");
        scanf(" %c", &choice);
    } while(choice != 'q');
    
    return 0;
}

output;
Enter two numbers: 50
50
Choose an operation (+, -, *, /, %): +
Result: 100
Press 'q' to quit or any other key to continue: q

Enter two numbers: 40
30
Choose an operation (+, -, *, /, %): -
Result: 10
Press 'q' to quit or any other key to continue: 
Enter two numbers: 20
30
Choose an operation (+, -, *, /, %): *
Result: 600
Press 'q' to quit or any other key to continue: q

Enter two numbers: 45
35
Choose an operation (+, -, *, /, %): /
Result: 1.29
Press 'q' to quit or any other key to continue: 
Enter two numbers: 60
40
Choose an operation (+, -, *, /, %): %
Result: 20
Press 'q' to quit or any other key to continue: 