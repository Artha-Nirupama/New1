#include<stdio.h>

int main(){
    int numbers[50]={0};
    int negative[50]={0};
    int user=0;
    int ue=0;
    int negcount=0;
    printf("Enter the arry size:");
    scanf("%d",&ue);

    for (int i=0 ; i < ue ; i++)
    {
        printf("Enter your number %d:",i+1);
        scanf("%d",&user);
        if (user<0)
        {
            negative[negcount]=user;
            negcount++;
        }     
    }
    

    for (size_t j = 0; j < negcount; j++)
    {
        printf("%d",negative[j]);
    }
    return 0;
}