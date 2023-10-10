#include <stdio.h>

int main(){
    int values[10],i=0,total=0,highest=-2000000000,lowest=2000000000;
    float average=0;
    for (i =0; i < 10; i++){
        scanf("%d",&values[i]);
    }
    for (i= 0; i < 10; i++){
        total += values[i];
        average += values[i] / 10.0;
        if (values[i]>highest){
            highest=values[i];
        }
        if (values[i]<lowest){
            lowest=values[i];
        }
    }
    printf("Total is %d\n",total);
    printf("Average is %.3f\n",average);
    printf("Highest is %d\n",highest);
    printf("Lowest is %d\n",lowest);
    return 0;
}
