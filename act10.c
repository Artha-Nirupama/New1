#include<stdio.h>
int main(){
    int i,n,sum=0;

    printf("Enter the range that you want to find odd count:");
    scanf("%d",&n);

    for ( i = 1; i <= n; i+=2)
    {
        sum+=i;
    }
    printf("The odd sum is=%d",sum);

    return 0;
}