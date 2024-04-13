Q.1 Write a Program to print the below pattern using nested for loop.
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1 
code;
#include <stdio.h>

int main() {
    int i, j;
    int number_of_lines = 5;  
    for (i = 1; i <= number_of_lines; i++) {
       
        for (j = i; j > 0; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

output;
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1 
Q.2 Write a Program to print the below pattern using nested for loop.
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
code;
#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
       
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
Q.3 Write a Program to print the below pattern using nested for loop.
5
4 4 
3 3 3
2 2 2 2
1 1 1 1 1
code;
#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 6 - i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
Q.4 Write a Program to print the below pattern using nested for loop.
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
code;
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
Q.5 Write a Program to print the below pattern using nested for loop.
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
code;
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        
        for (j = 5; j >= i; j--) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}
Q.6 Write a Program to print the below pattern using nested for loop.
1 0 1 0 1
1 0 1 0
1 0 1
1 0 
1
code;
#include <stdio.h>

int main() {
    int i, j;
    for (i = 5; i > 0; i--) {
        
        for (j = 1; j <= i; j++) {
           
            printf("%d ", j % 2);
        }
        
        printf("\n");
    }

    return 0;
}
Q.7 Write a Program to print the below pattern using nested for loop.
A
B A
C B A
D C B A
E D C B A
code;
#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        
        for (j = i; j >= 0; j--) {
            printf("%c ", 'A' + j);
        }
        
        printf("\n");
    }

    return 0;
}
Q.8 Write a Program to print the below pattern using nested for loop.
1
2    3
4    5   6
7    8   9   10
11 12 13 14 15
code;
#include <stdio.h>

int main() {
    int rows = 5; 
    int count = 1; 

    for (int i = 1; i <= rows; i++) {
       
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++; r
        }
        
        printf("\n");
    }

    return 0;
}


