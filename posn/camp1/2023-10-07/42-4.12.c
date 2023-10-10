#include <stdio.h>

int main(){
    int values[4][4],i=0,total=0;
    for (i = 0; i < 4; i++){
        scanf("%d %d %d %d",&values[i][0],&values[i][1],&values[i][2],&values[i][3]);
    }
    // X O O O
    // X X O O
    // X X X O
    // X X X X
    total = values[0][1] + values[0][2] + values[1][2]+ values[0][3]+values[1][3]+values[2][3];
    printf("Total above diagonal: %d", total);
    return 0;
}
