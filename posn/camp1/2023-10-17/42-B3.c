#include <stdio.h>

int abv(int a){
    return a<0?-a:a;
}

int lower(int a, int b){
    return a<b?a:b;
}

int main(){
    char start[5], end[5];
    int i;
    scanf("%s",start);
    scanf("%s",end);
    for (i = 0; i < 4; i++){
        int up = abv((int)end[i]-(int)start[i]);
        int down = 26-abv((int)start[i]-(int)end[i]);
        int moves = lower(up,down);
        // assuming up != down for all characters
        if (moves == 0){
            printf("NM");
        } else if (up>down){
            printf("D%d",moves);
        } else {
            printf("U%d",moves);
        }
    }
    printf("\n");
    return 0;
}
