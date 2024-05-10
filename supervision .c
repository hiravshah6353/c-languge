q1
#include <stdio.h>

int main() {
    FILE *even_file, *odd_file;
    int num;

    even_file = fopen("even_numbers.txt", "w");
    odd_file = fopen("odd_numbers.txt", "w");

    for(num = 50; num <= 70; num++) {
        if(num % 2 == 0) {
            fprintf(even_file, "%d\n", num);
        } else {
            fprintf(odd_file, "%d\n", num);
        }
    }

    fclose(even_file);
    fclose(odd_file);

    printf("Even and odd numbers have been written to separate files.\n");

    return 0;
}
q2
#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Student students[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics Marks: ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics Marks: ");
        scanf("%d", &students[i].phy_marks);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("\nMark Sheet for student %d:\n", i+1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %d\n", students[i].chem_marks);
        printf("Mathematics Marks: %d\n", students[i].maths_marks);
        printf("Physics Marks: %d\n", students[i].phy_marks);
        
        float percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3.0;
        printf("Percentage: %.2f%%\n", percentage);
    }
    
    return 0;
}