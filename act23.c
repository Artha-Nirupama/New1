#include <stdio.h>
#include <string.h>

int main() {
    int Scount = 0;
    char fName[50];
    char lName[50];
    char fullName[50][2][50]; // 50 students, 2 names, 50 chars max

    printf("Enter the student number: ");
    scanf("%d", &Scount);
    getchar(); // clear newline from buffer

    for (size_t i = 0; i < Scount; i++) {
        printf("Enter your first name: ");
        fgets(fName, sizeof(fName), stdin);
        fName[strcspn(fName, "\n")] = '\0'; // remove newline

        printf("Enter your last name: ");
        fgets(lName, sizeof(lName), stdin);
        lName[strcspn(lName, "\n")] = '\0';

        strcpy(fullName[i][0], fName); // copy first name
        strcpy(fullName[i][1], lName); // copy last name
    }

    printf("\nStudent list:\n");
    for (size_t i = 0; i < Scount; i++) {
        printf("%s %s\n", fullName[i][0], fullName[i][1]);
    }

    return 0;
}
//below is the my first way that i think above is a 2D arry.but i after realzed it is a 3D arry for this question.Its also has errors😂
/*
#include<stdio.h>
#include<string.h>

int main(){
    int Scount=0;
    char fName[50];
    char lName[50];
    char fullName[50][2][50];

    printf("Enter the student number: ");
    scanf("%d",&Scount);
    getchar();

    for (size_t i = 0; i < Scount-1; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            if (j==0)
            {
                printf("Enter your first name: ");
                fgets(fName,sizeof(fName),stdin);
                fullName[i][j][50]=fName;
                fName[strcspn(fName, "\n")] = '\0';
            }
            else{
                printf("\nEnter your last name: ");
                fgets(lName,sizeof(lName),stdin);
                fullName[i][j][50]=lName;
            }
        }       
    }
    for (size_t i = 0; i < Scount-1; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            printf("%s",fullName[j]);
        }
        printf("\n");
    }
    
    return 0;
}
*/