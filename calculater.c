#include<stdio.h>
#include<math.h>

int main(){
    float num1=0.0f;
    float num2=0.0f;
    char oparater='\0';
    float result=0.0f;

    printf("---Calculater---\n");

    printf("Enter Frist Number: ");
    scanf("%f",&num1);
    
    printf("Enter Oparater(+,-,*,/,%%,^): ");
    scanf(" %c",&oparater);
   
    printf("Enter Secound Number: ");
    scanf("%f",&num2);

    switch (oparater)
    {
    case '+':
        result=num1+num2;
        break;
    case '-':
        result=num1-num2;
        break;
    case '*':
        result=num1*num2;
        break;
    case '/':
        result=num1/num2;
        break;
    case '%':
        int x = round(num1);
        int y = round(num2);
        result= x % y;
        break;
    case '^':
        result=pow(num1,num2);
        break;
    default:
        printf("Enter a valid oparater!");
        break;
    }
    printf("%0.2f %c %0.2f = %0.2f",num1,oparater,num2,result);
    return 0;
}