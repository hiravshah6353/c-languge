Q.1 Write a Program to print the below pattern using nested for loop.
            1
         2 1
      3 2 1
   4 3 2 1
5 4 3 2 1 
code;
#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5; 
    
    for (i = 1; i <= n; i++) {
        
        for (j = n - i; j > 0; j--) {
            printf("   "); 
        }
        for (k = i; k > 0; k--) {
            printf("%d  " , k);
        }
        printf("\n");
    }
    return 0;
}
Q.2 Write a Program to print the below pattern using nested for loop.
            5
         4 5
      3 4 5
   2 3 4 5
1 2 3 4 5
code;
#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;  

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("   "); 
        }
        for (k = n - i + 1; k <= n; k++) {
            printf("%d ", k);
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
    int i, j, k;
    int n = 5;  

    for (i = 1; i <= n; i++) {
        for (j = n - i; j > 0; j--) {
            printf("   "); 
        }
        for (k = 0; k < i; k++) {
            printf("%d ", n - i + 1);
        }
        printf("\n");
    }

    return 0;
}
Q.4 Write a Program to print the below pattern using nested for loop.
1 0 1 0 1
   0 1 0 1
      1 0 1
         0 1
            1
code;
#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = 0; i < rows; i++) {
        
        for (int space = 0; space < 3 * i; space++) {
            printf(" ");
        }

        
        for (int j = 0; j < rows - i; j++) {
            
            printf("%d ", (i + j) % 2);
        }

        
        printf("\n");
    }

    return 0;
}
Q.5 Write a Program to print the below pattern using nested for loop.
5 4 3 2 1
   4 3 2 1
      3 2 1
         2 1
            1
code;
#include <stdio.h>

int main() {
    int rows = 5; 
    for (int i = 0; i < rows; i++) {
        
        for (int space = 0; space < 3 * i; space++) {
            printf(" ");
        }

        for (int j = rows - i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
Q.6 Write a Program to print the below pattern using nested for loop.
5 4 3 2 1
   5 4 3 2
      5 4 3
         5 4
            5

code;
#include <stdio.h>

int main() {
    int rows = 5;  

    for (int i = 0; i < rows; i++) {
        
        for (int space = 0; space < i * 3; space++) {
            printf(" ");  
        }

        for (int num = 5; num > 5 - i - 1; num--) {
            printf("%d ", num);
        }

        printf("\n");
    }

    return 0;
}

Q.7 Write a Program to print the below pattern using nested for loop.
1 2 3 4 5 5 4 3 2 1
1 2 3 4       4 3 2 1
1 2 3              3 2 1
1 2                    2 1
1                          1
code;
#include <stdio.h>

int main() {
    int rows = 5;  

    for (int i = 0; i < rows; i++) {
        
        for (int num = 1; num <= rows - i; num++) {
            printf("%d ", num);
        }
        
        
        for (int space = 1; space < 2 * i; space++) {
            printf("  ");  
        }
        
      
        for (int num = rows - i; num > 0; num--) {
            printf("%d ", num);
        }

        
        printf("\n");
    }

    return 0;
}
Q.8 Write a Program to print the below pattern using nested for loop.
1 2 3 4 5 5 4 3 2 1
1 2 3 4       4 3 2 1
1 2 3              3 2 1
1 2                    2 1
1                          1
1                          1
1 2                    2 1
1 2 3              3 2 1
1 2 3 4       4 3 2 1
1 2 3 4 5 5 4 3 2 1
code;
#include <stdio.h>

int main() {
    int totalRows = 10;
    int halfRows = totalRows / 2;  

   
    for (int i = 0; i < totalRows; i++) {
        int row = i < halfRows ? i : totalRows - i - 1;  

        
        for (int num = 1; num <= halfRows - row; num++) {
            printf("%d ", num);
        }
        
        
        for (int space = 1; space < 2 * (row + 1) - 2; space++) {
            printf("  ");  
        }
        
        
        if (halfRows - row > 0) {
            for (int num = halfRows - row; num > 0; num--) {
                printf("%d ", num);
            }
        }

       
        printf("\n");
    }

    return 0;
}
Q.9 Write a Program to print the below pattern using nested for loop.
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
code;
#include <stdio.h>

int main() {
    int rows = 5;  
    
    for (int i = rows; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    
    for (int i = 2; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
Q.10 Write a Program to print the below pattern using nested for loop.
            1
         1 2 1
      1 2 3 2 1
   1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
code;
#include <stdio.h>

int main() {
    int rows = 5;  
    
    for (int i = 1; i <= rows; i++) {
        
        for (int space = 1; space <= rows - i; space++) {
            printf("   ");  
        }

        
        for (int num = 1; num <= i; num++) {
            printf("%d ", num);
        }

        
        for (int num = i - 1; num >= 1; num--) {
            printf("%d ", num);
        }

    
        printf("\n");
    }

    return 0;
}
Q.11 Write a Program to print the below pattern using nested for loop.
           *
        * * *
      * * * * *
   * * * * * * *
* * * * * * * * *
code;
#include <stdio.h>

int main() {
    int rows = 5;  

    for (int i = 1; i <= rows; i++) {
        
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");  
        }

        
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("* ");
        }

        
        printf("\n");
    }

    return 0;
}

