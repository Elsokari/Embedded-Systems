#include <stdio.h>

// Define a struct to hold student information
struct Student {
    char name[50];
    int age;
    float degree;
    char section[10];
};

// Function to print student information
void print(struct Student *students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Degree: %.2f\n", students[i].degree);
        printf("Section: %s\n", students[i].section);
        printf("\n");
    }
}

int main() {
    struct Student students[5];

    // Fill the data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Degree: ");
        scanf("%f", &students[i].degree);
        printf("Section: ");
        scanf("%s", students[i].section);
        printf("\n");
    }

    // Call the print function to print student information
    print(students, 5);

    return 0;
}