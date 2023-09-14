// Write a program in C to show a pointer to an array whose contents are pointers to structures
#include <stdio.h>
#include <stdlib.h>

// Define a sample structure
struct Student {
    char name[50];
    int roll_number;
};

int main() {
    // Define an array of pointers to structures
    struct Student* studentPointers[3];

    // Create some sample structures
    struct Student student1 = {"Alice", 101};
    struct Student student2 = {"Bob", 102};
    struct Student student3 = {"Charlie", 103};

    // Assign the structure pointers to the array
    studentPointers[0] = &student1;
    studentPointers[1] = &student2;
    studentPointers[2] = &student3;

    // Access and print the structure members using the pointer array
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", studentPointers[i]->name);
        printf("Roll Number: %d\n", studentPointers[i]->roll_number);
        printf("\n");
    }

    return 0;
}
