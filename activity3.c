#include<stdio.h>

int main(){
    int distance,time,speed;

    printf("Enter the distance that you traveled.(enter that in km):");  
    scanf("%d",&distance);
    printf("Enter the total time that you traveled(enter it in minites):");
    scanf("%d",&time);

    speed = (distance*1000)/(time*60);
    printf("Your speed is :");
    printf("%d",speed);
}