#include<stdio.h>

int main(){
    int i,n;

    printf("Enter the number:");

    scanf("%d",&n);
    i=0;
    do
    {
        i++;
        printf("%d",i);
        printf("\n");
    } while (i<n);
    return 0;
}