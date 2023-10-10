#include <stdio.h>

int main(){
    int values[10],i=0,total=0;
    for (i =0; i < 10; i++){
        scanf("%d",&values[i]);
    }
    for (i= 0; i < 10; i++){
        total += values[i];
    }
    printf("Total is %d",total);
    return 0;
}
