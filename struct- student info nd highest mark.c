#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks[3];
    float averageMarks;
};

int main() {
    struct Student students[5];
    int i, j;
    float highestAverage = 0;
    int highestIndex = 0;

    // Input details of students
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, 50, stdin);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks in 3 subjects:\n");
        for (j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
        getchar();  // Consume newline character left by scanf

        // Calculate average marks
        students[i].averageMarks = 0;
        for (j = 0; j < 3; j++) {
            students[i].averageMarks += students[i].marks[j];
        }
        students[i].averageMarks /= 3;

        // Check if current student has highest average marks
        if (students[i].averageMarks > highestAverage) {
            highestAverage = students[i].averageMarks;
            highestIndex = i;
        }

        printf("\n");
    }

    // Display details of student with highest average marks
    printf("Student with the highest average marks:\n");
    printf("Name: %s", students[highestIndex].name);
    printf("Roll Number: %d\n", students[highestIndex].rollNumber);

    return 0;
}
