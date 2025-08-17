#include<stdio.h>

int main(){

    FILE *pFile = fopen("output.txt","w");

    char text[]="My first writing!";

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }

    fprintf(pFile,"%s",text);

    printf("Fille was written successfully!\n");

    fclose(pFile);

    return 0;
}