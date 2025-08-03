#include<stdio.h>

int main(){
    int max=100;
    int arry[max];
    int n;

    printf("Enter the number size of arry:");
    scanf("%d",&n);

    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the arry elements:");
        scanf("%d",&arry[i]);
    }

    printf("The new arry elements are:");
    for (int i = 0; i < n; i++)
    {
        if(arry[i]<0)
        {
            printf("%d\t",arry[i]);
        }    
    }
    return 0;
}