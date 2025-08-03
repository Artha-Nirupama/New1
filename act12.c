#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value to reverse:");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        printf("%d",n);
        n--;        
    }
    return 0;
}