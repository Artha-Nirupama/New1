#include<stdio.h>

int main(){
    int maxName=45;
    int maxMarks=45;
    int nSize,index;
    char names[maxName];

    float marks[maxMarks];

    printf("Enter the name count:");
    scanf("%d",&nSize);

    for (int i = 1; i <= nSize; i++)
    {
        printf("Enter the name and marks:");
        scanf("%c,%f",&names[i],&marks[i]);
    }

    printf("Enter the student index(EX:1,2..):");
    scanf("%d",&index);

    for (int i = 1; i < nSize; i++)
    {
        if (index==names[i])
        {
            printf("The sudent name is :%c",names[index]);
            printf("And the student total marks is:%f",marks[index]);
        }
        
    }
    return 0;
}