//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s, *ptr;

    ptr = &s;

    // Modifying structure members using pointer and -> operator
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Displaying data using -> operator
    printf("\n--- Student Details ---\n");
    printf("Roll: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
