#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    char name[50];
    int rollNumber;
    float marks;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to add a new student
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Cannot add more students. Maximum limit reached.\n");
        return;
    }
    
    printf("Enter name: ");
    getchar(); // Clear the newline character left by previous input
    fgets(students[studentCount].name, 50, stdin);
    students[studentCount].name[strcspn(students[studentCount].name, "\n")] = '\0'; // Remove trailing newline
    
    printf("Enter roll number: ");
    scanf("%d", &students[studentCount].rollNumber);
    
    printf("Enter marks: ");
    scanf("%f", &students[studentCount].marks);
    
    studentCount++;
    printf("Student added successfully!\n");
}

// Function to view all students
void viewStudents() {
    if (studentCount == 0) {
        printf("No students to display.\n");
        return;
    }
    
    printf("\n%-10s %-20s %-10s\n", "Roll No.", "Name", "Marks");
    printf("========================================\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%-10d %-20s %-10.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
    }
}

// Function to edit a student's record
void editStudent() {
    int rollNumber, found = 0;
    
    printf("Enter roll number of the student to edit: ");
    scanf("%d", &rollNumber);
    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            printf("Editing details for %s (Roll No: %d)\n", students[i].name, rollNumber);
            
            printf("Enter new name: ");
            getchar(); // Clear newline
            fgets(students[i].name, 50, stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';
            
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            
            printf("Student record updated successfully!\n");
            break;
        }
    }
    
    if (!found) {
        printf("No student found with roll number %d.\n", rollNumber);
    }
}

// Function to delete a student's record
void deleteStudent() {
    int rollNumber, found = 0;
    
    printf("Enter roll number of the student to delete: ");
    scanf("%d", &rollNumber);
    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == rollNumber) {
            found = 1;
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Student record deleted successfully!\n");
            break;
        }
    }
    
    if (!found) {
        printf("No student found with roll number %d.\n", rollNumber);
    }
}

// Main menu
void menu() {
    int choice;
    
    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Edit Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                editStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                printf("Exiting the program.\n");
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int main() {
    menu();
    return 0;
}
