#include <stdio.h>

int main(){
    int values[5], i = 0,j=0;
    for (i =0; i < 5; i++){
        scanf("%d",&values[i]);
    }
    for (i =0; i <5 ;i++){
        printf("%d ",values[i]);
        for (j = 0; j< values[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
