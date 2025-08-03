#include<stdio.h>

int main(){
    int i,max,min,n;
    int maxSize=100;
    int arry[maxSize];
    printf("Enter the arry size:");
    scanf("%d",&n);

    printf("Enter the elemnts for the arry:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",arry[i]);
    }
    
    max = arry[0];
    min = arry[0];

    for ( i = 1; i < n; i++)
    {
        if(arry[i]>max)
        {
            max= arry[i];
        }
        if (arry[i]<min)
        {
            min= arry[i];
        }
    }
    printf("maximun elemnt is:%d\n",max);
    printf("minimun elemnt is:%d\n",min);
    return 0;
}