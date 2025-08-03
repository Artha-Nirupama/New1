#include<stdio.h>
int main(){

    int i,n,sum;
    printf("Enter the number rage above 1:");
    scanf("%d",&n);
    i=1;

    while (i<=n)
    {   
        printf("\n");
        printf("%d",i);
        i+=2;
    }
    return 0;
}