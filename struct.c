#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    int age;
    char grade;
} Student;

void inputStudent(Student *student) {
    printf("Enter student ID: ");
    scanf("%d", &student->id);
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter student age: ");
    scanf("%d", &student->age);
    printf("Enter student grade: ");
    scanf("%d", &student->grade); 
    
}

void printStudent(const Student *student) {
    printf("Student ID: %d\n", student->id);
    printf("Student Name: %s\n", student->name);
    printf("Student Age: %d\n", student->age);
    printf("Student Grade: %d\n", student->grade);
}

int main() {
    Student student;
    inputStudent(&student);
    printStudent(&student);

    return 0;
}