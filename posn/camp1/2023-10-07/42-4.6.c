#include <stdio.h>

int main(){
    int values[10],evens=0,i=0;
    for (i =0; i < 10; i++){
        scanf("%d",&values[i]);
    }
    for (i=0;i<10;i++){
        if (values[i]%2==0){
            evens++;
        }
    }
    printf("There are %d even numbers.",evens);
    return 0;
}
