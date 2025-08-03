#include<stdio.h>

int main(){
    int price,discount,discountprice,final;

    printf("Enter the item price:");
    scanf("%d",&price);

    printf("Enter the item discount:");
    scanf("%d",&discount);

    discountprice=(price/100)*discount;
    final=price-discountprice;
    printf("%d",final);
}