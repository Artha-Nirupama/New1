#include<stdio.h>

int main(){
    int distance,ac,velo,time;

    printf("Enter the acceleration that you traveled.(enter that in kmh**-2):");  
    scanf("%d",&distance);
    printf("Enter the total time that you traveled(enter it in minites):");
    scanf("%d",&time);
    velo=0;
    distance =( ac*time*time)/2;
    printf("Your distance is :");
    printf("%d",distance);
}