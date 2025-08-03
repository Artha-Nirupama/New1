#include<stdio.h>
int main(){
    char ch='a';

    printf("alphabets from a-z are: \n");

    do
    {
        printf("%c\n",ch);
        ch++;
    } while(ch<='z');
    return 0;
}