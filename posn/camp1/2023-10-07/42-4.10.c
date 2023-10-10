#include <stdio.h>

int main(){
    int values[3][3],i=0,total=0;
    for (i = 0; i < 3; i++){
        scanf("%d %d %d",&values[i][0],&values[i][1],&values[i][2]);
    }
    for (i = 0; i < 3; i++){
        total += values[i][i];
    }
    for (i = 0; i< 3; i++){
        total += values[i][2-i];
    }
    printf("Total across both diagonals: %d", total);
    return 0;
}
