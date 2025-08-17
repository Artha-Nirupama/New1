#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float basicSalary;
} emps;

int main() {
    FILE *pFile = fopen("input2.txt", "w"); 

    if (pFile == NULL) {
        printf("File opening error occurred!\n");
        return 1;
    }

    int EmCount;
    printf("Enter Employee number: ");
    scanf("%d", &EmCount);

    emps emp[EmCount];


    for (int i = 0; i < EmCount; i++) {
        printf("Enter Name Age Salary: ");
        scanf("%s %d %f", emp[i].name, &emp[i].age, &emp[i].basicSalary);

        fprintf(pFile, "%s %d %.2f\n",
                emp[i].name, emp[i].age, emp[i].basicSalary);
    }

    fclose(pFile);
    printf("File was written successfully!\n");

    pFile = fopen("input2.txt", "r"); 
    if (pFile == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading employee data from file:\n");
    emps readEmp;

    while (fscanf(pFile, "%s %d %f",
                  readEmp.name, &readEmp.age, &readEmp.basicSalary) == 3) {
        printf("Name: %s | Age: %d | Salary: %.2f\n",
               readEmp.name, readEmp.age, readEmp.basicSalary);
    }

    fclose(pFile);

    return 0;
}
