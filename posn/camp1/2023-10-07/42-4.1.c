#include <stdio.h>
int main(){
    int scores[5],i = 0;
    for (i = 0; i < 5; i++){
        scanf("%d",&scores[i]);
    }
    for (i = 4;i >=0; i--){
        printf("%d\n",scores[i]);
    }
    return 0;
}
