#include <stdio.h>

int main(){
    int values[5][3],i=0,j=0;
    for (i = 0; i < 5; i++){
        scanf("%d %d %d",&values[i][0],&values[i][1],&values[i][2]);
    }
    // rows
    for (i = 0; i < 5; i++){
        int total = 0;
        for (j = 0; j < 3; j++){
            total += values[i][j];
        }
        printf("Total for row #%d: %d\n",i+1,total);
    }
    // rows
    for (i = 0; i < 3; i++){
        int total = 0;
        for (j = 0; j < 5; j++){
            total += values[j][i];
        }
        printf("Total for column #%d: %d\n",i+1,total);
    }
    return 0;
}
