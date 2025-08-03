#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    char userName[50]="";
    char password[50]="";
    bool correct=0;
    do
    {
        printf("\nEnter your username:");
        fgets(userName,sizeof(userName),stdin);
        userName[strlen(userName)-1]='\0';
        

        printf("Enter your password:");
        fgets(password,sizeof(password),stdin);
        password[strlen(password)-1]='\0';

        if (strcmp(userName ,"user")==0 && strcmp(password,"password123")==0)
        {   
            printf("Access granted!");
            correct=1;
        }
        else
        {
            printf("Invalid username or password!");
        }
        
    } while (correct==0);
    
    return 0;
}