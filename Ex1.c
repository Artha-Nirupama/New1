#include<stdio.h>

int main(){

    int marks[]={70,62,94,40,57,91,88,42,30,47};

    int i;
    int total=0;
    for (i = 0; i < 10; i++)
    {
        total=total+marks[i];
    }
    float avg=total/10;
    printf("The avarage marks is: %f",avg);
    return 0;
}