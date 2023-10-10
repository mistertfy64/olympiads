#include <stdio.h>

int main(){
    int values[3][3],i=0,total=0;
    for (i = 0; i < 3; i++){
        scanf("%d %d %d",&values[i][0],&values[i][1],&values[i][2]);
    }
    // X O O
    // X X O
    // X X X
    total = values[0][1] + values[0][2] + values[1][2];
    printf("Total above diagonal: %d", total);
    return 0;
}
