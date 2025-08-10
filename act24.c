#include<stdio.h>

int maxm(int input1,int input2);
int minm(int input1,int input2);

int main(){
    int input1=0;
    int input2=0;

    printf("Enter the first number:");
    scanf("%d",&input1);
    printf("Enter the secound number:");
    scanf("%d",&input2);

    int max=maxm(input1,input2);
    int min=minm(input1,input2);

    printf("The maximum is %d and minimun is %d.",max,min);

    return 0;
}
int maxm(int input1,int input2){
    if (input1>input2)
    {
        return input1;
    }
    else
    {
        return input2;
    }
}
int minm(int input1,int input2){
    if (input1<input2)
    {
        return input1;
    }
    else
    {
        return input2;
    }
}