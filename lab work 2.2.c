Q.1 Program to find the area of a circle:

ans; #include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
Q.2 Program to find the area of a rectangle:

ans;#include <stdio.h>

int main() {
    float length, width, area;

    // Prompt the user to enter the length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area
    area = length * width;

    // Display the result
    printf("The area of the rectangle with length %.2f and width %.2f is %.2f\n", length, width, area);

    return 0;
}

Q.3 Program to find the area of a triangle:

ans;#include <stdio.h>

int main() {
    float base, height, area;

    // Prompt the user to enter the base and height
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area
    area = 0.5 * base * height;

    // Display the result
    printf("The area of the triangle with base %.2f and height %.2f is %.2f\n", base, height, area);

    return 0;
}

Q.4 Program to find Simple interest:

ans;#include <stdio.h>

int main() {
    float principle, rate, time, simple_interest;

    // Prompt the user to enter principle, rate, and time
    printf("Enter the principle amount: ");
    scanf("%f", &principle);
    printf("Enter the rate of interest (per annum): ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate the simple interest
    simple_interest = (principle * rate * time) / 100;

    // Display the result
    printf("The simple interest is %.2f\n", simple_interest);

    return 0;
}

Q.5 Program to find the perimeter of a circle:

ans;#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, perimeter;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the perimeter
    perimeter = 2 * PI * radius;

    // Display the result
    printf("The perimeter of the circle with radius %.2f is %.2f\n", radius, perimeter);

    return 0;
}
