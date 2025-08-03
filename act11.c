#include<stdio.h>
int main(){
    int i,n,result;
    result=1;
    printf("Enter the rang that you want to find factorial:");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        result=result*i;
    }
    printf("Factoral of %d=%d",n,result);

    return 0;
}