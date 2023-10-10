#include <stdio.h>

int main()
{
    int usage,cost;
    printf("Enter your total usage of water: ");
    scanf("%d",&usage);
    if (usage <=10){
        cost = usage*5;
    } else if (usage <=50){
        cost = usage*10;
    } else if (usage <=100){
        cost = usage*12;
    } else if (usage <=500){
        cost = usage*15;
    } else if (usage <=1000){
        cost = usage*18;
    } else if (usage <=5000){
        cost = usage*20;
    } else {
        cost = usage*21;
    }
    printf("Total Cost: %d",cost);
    return 0;
}
