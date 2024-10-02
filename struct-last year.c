#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1, person2, person3;

    // Input details of person 1
    printf("Enter name of person 1: ");
    fgets(person1.name, 50, stdin);
    printf("Enter age of person 1: ");
    scanf("%d", &person1.age);
    getchar();  // Consume newline character left by scanf

    // Input details of person 2
    printf("\nEnter name of person 2: ");
    fgets(person2.name, 50, stdin);
    printf("Enter age of person 2: ");
    scanf("%d", &person2.age);
    getchar();  // Consume newline character left by scanf

    // Input details of person 3
    printf("\nEnter name of person 3: ");
    fgets(person3.name, 50, stdin);
    printf("Enter age of person 3: ");
    scanf("%d", &person3.age);
    getchar();  // Consume newline character left by scanf

    printf("\nPerson Details (Asynchronously):\n");

    // Print the details of the person with the highest age
    if (person1.age >= person2.age && person1.age >= person3.age) {
        printf("Name: %sAge: %d\n", person1.name, person1.age);
        if (person2.age >= person3.age) {
            printf("Name: %sAge: %d\n", person2.name, person2.age);
            printf("Name: %sAge: %d\n", person3.name, person3.age);
        } else {
            printf("Name: %sAge: %d\n", person3.name, person3.age);
            printf("Name: %sAge: %d\n", person2.name, person2.age);
        }
    } else if (person2.age >= person1.age && person2.age >= person3.age) {
        printf("Name: %sAge: %d\n", person2.name, person2.age);
        if (person1.age >= person3.age) {
            printf("Name: %sAge: %d\n", person1.name, person1.age);
            printf("Name: %sAge: %d\n", person3.name, person3.age);
        } else {
            printf("Name: %sAge: %d\n", person3.name, person3.age);
            printf("Name: %sAge: %d\n", person1.name, person1.age);
        }
    } else {
        printf("Name: %sAge: %d\n", person3.name, person3.age);
        if (person1.age >= person2.age) {
            printf("Name: %sAge: %d\n", person1.name, person1.age);
            printf("Name: %sAge: %d\n", person2.name, person2.age);
        } else {
            printf("Name: %sAge: %d\n", person2.name, person2.age);
            printf("Name: %sAge: %d\n", person1.name, person1.age);
        }
    }

    return 0;
}
