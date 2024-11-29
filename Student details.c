include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char college[50];
    int roll;
    char department[50];
    char gender[10]; 
};
int main() {
    struct Student student1;

    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = '\0'; 

    printf("Enter college name: ");
    fgets(student1.college, sizeof(student1.college), stdin);
    student1.college[strcspn(student1.college, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &student1.roll);

    getchar();

    printf("Enter department: ");
    fgets(student1.department, sizeof(student1.department), stdin);
    student1.department[strcspn(student1.department, "\n")] = '\0'; // Remove newline

    printf("Enter gender: ");
    fgets(student1.gender, sizeof(student1.gender), stdin);
    student1.gender[strcspn(student1.gender, "\n")] = '\0'; // Remove newline

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student1.name);
    printf("College: %s\n", student1.college);
    printf("Roll Number: %d\n", student1.roll);
    printf("Department: %s\n", student1.department);
    printf("Gender: %s\n", student1.gender);

    return 0;
}
