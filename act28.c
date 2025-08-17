#include<stdio.h>
#include<string.h>

int main(){

    char word[50];
    printf("Enter the word: ");
    fgets(word,sizeof(word),stdin);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            word[i] = word[i] - 32;
        }
        
    }
    printf("Uppercase string : %s.",word);

    return 0;
}