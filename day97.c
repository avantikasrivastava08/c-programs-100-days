//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data Read From File ---\n");
    printf("ID      : %d\n", e_read.id);
    printf("Name    : %s\n", e_read.name);
    printf("Salary  : %.2f\n", e_read.salary);

    return 0;
}
