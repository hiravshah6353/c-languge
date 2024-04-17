Q.1 Write a Program to print the below pattern using nested for loop.
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
code;
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", 40 + j);
        }
        printf("\n");
    }

    return 0;
}
Q.2 Write a Program to print the below pattern using nested for loop.
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25
code;
#include <stdio.h>

int main() {
    int num = 11;
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

Q.3 Write a Program to print the below pattern using nested for loop.
            5
         4 5
      3 4 5
   2 3 4 5
1 2 3 4 5
code;
#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) {

        for (j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        for (k = i; k <= rows; k++) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
Q.4 Write a Program to print the below pattern using nested for loop.
1 0 1 0 1
   1 0 1 0
      1 0 1
         1 0
            1
code;
#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j < i; j++) {
            printf("   ");
        }

               for (k = i; k <= rows; k++) {
            if ((k - i) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }

        printf("\n");
    }

    return 0;
}
Q.5 Write a Program to print the below pattern using nested for loop.
1                          1
1 2                    2 1
1 2 3              3 2 1
1 2 3 4       4 3 2 1
1 2 3 4 5 5 4 3 2 1
code;
#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            printf("  ");
        }

        for (int j = i; j > 0; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
Q.6 Write a Program to print the below pattern using nested for loop.
            5
         4 5 4
      3 4 5 4 3
   3 3 4 5 4 3 2
1 2 3 4 5 4 3 2 1
code;
#include <stdio.h>

int main() {
    int rows = 5;

    for (int row = 1; row <= rows; row++) {
        for (int space = 0; space < (rows - row); space++) {
            printf("   ");
        }

        int start = rows - row + 1;

        for (int num = start; num <= 5; num++) {
            printf("%d ", num);
        }

        for (int num = 5 - 1; num >= start; num--) {
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}

Q.7 Write a Program to print the below pattern using nested for loop.
*  *  *  *  *
*             *
*  *  *  *  *
*             *
*             *
code;
#include <stdio.h>

int main() {
    int rows = 5;  
    int cols = 5;  

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == 3 || (i > 3 && j == 1)) {
                printf("*  ");
            }
            else if ((i == 2 || i == 4 || i == 5) && (j > 1 && j < cols)) {
                printf("   ");
            }
            else {
                printf("*  ");
            }
        }
        printf("\n");
    }

    return 0;
}    