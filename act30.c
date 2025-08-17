#include<stdio.h>

typedef struct{
    char name[50];
    int price;
    int year;
}
books;

int main(){

    books book[]={{"Hathpana",1200,2004},
                {"Hathpana",1200,2004},
                {"Hathpana",1200,2004}};

    int size=sizeof(book)/sizeof(book[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%s %d %d\n",book[i].name,book[i].price,book[i].year);
    }
    
    return 0;
}