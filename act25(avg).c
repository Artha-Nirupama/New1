#include <stdio.h>
#include <string.h>

int main() {
    int Snumber = 0;
    printf("Enter the student number: ");
    scanf("%d", &Snumber);

    char names[Snumber][50];

    for (size_t i = 0; i < Snumber; i++) {
        printf("Enter the name %zu: ", i + 1);
        scanf("%s", names[i]);
    }

    int Scount = 0;
    printf("Enter the number of subjects: ");
    scanf("%d", &Scount);

    int marks[Snumber][Scount]; 

    for (size_t i = 0; i < Snumber; i++) {
        printf("\nEnter %s's subject marks:\n", names[i]);
        for (int j = 0; j < Scount; j++) {
            printf("Enter subject %d marks: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n--- Marks Display ---\n");
    printf("\n");
    for (size_t i = 0; i < Snumber; i++) {
        printf("%s's marks are: ", names[i]);
        int total=0;
        for (int j = 0; j < Scount; j++) {
            printf("%d ", marks[i][j]);
            total = total + marks[i][j];
        }
        printf("\nThe total is %d.",total);
        printf("\nthe Avarage is %d.",(total/Scount));
        printf("\n");
        printf("\n");
    }

    return 0;
}
