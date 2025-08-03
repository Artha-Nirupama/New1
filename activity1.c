#include<stdio.h>

int main(){
    int Height,Width,Area;

    printf("Enter the Height of the rectangle:");
    scanf("%d",&Height);
    printf("Enter the Width of the rectangle:");
    scanf("%d",&Width);
    Area=Height*Width;
    printf("%d",Area,"cm");
}