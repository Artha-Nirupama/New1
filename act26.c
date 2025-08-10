#include<stdio.h>

void swap(int *pNum1,int *pNum2);

int main(){
    int num1=0;
    int *pNum1=&num1;
    int num2=0;
    int *pNum2=&num2;

    printf("Enter the numbers:");
    scanf("%d %d",pNum1,pNum2);

    swap(pNum1,pNum2);
    printf("The swaped numbers are now num1 = %d and num2 =%d.",num1,num2);

    return 0;
}
void swap(int *num1,int *num2){
    int x = *num1;

    *num1 = *num2;
    *num2 = x;
}