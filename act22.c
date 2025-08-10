#include<stdio.h>

int main(){
    int numbers[50]={0};
    int ucount=0;
    int user=0;
    int numCount=0;

    printf("Enter the number count:");
    scanf("%d",&ucount);

    for (size_t i = 0; i < ucount; i++)
    {
        printf("Enter your number %d:",i+1);
        scanf("%d",&user);

        numbers[i]=user;
        numCount++;
    }
    int prem=numbers[0];
    int prel=numbers[0];

    for (size_t j = 0; j < numCount; j++)
    {
        if (numbers[j]<prem)
        {
            prem = numbers[j];  
        }
        else if (numbers[j]>prel)
        {
            prel = numbers[j];
        }
    }
    printf("The smallest number is %d and largest number is %d",prem,prel);
    return 0;
}