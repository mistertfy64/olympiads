#include <stdio.h>

int main(){
    int i = 0,j=0,values[3][3];
    for (i = 0; i < 3; i++){
        scanf("%d %d %d", &values[i][0],&values[i][1],&values[i][2]);
    }
    for (i = 0; i < 3; i++){
        printf("%d %d %d\n", values[i][0],values[i][1],values[i][2]);
    }
    // 2.
    for (i = 0; i < 3; i++){
        int total = 0;
        for (j = 0; j <3; j++){
            total += values[i][j];
        }
        printf("Total of row %d: %d\n",i+1,total);
    }
    // 3.
    for (i = 0; i < 3; i++){
        int total = 0;
        for (j = 0; j <3; j++){
            total += values[j][i];
        }
        printf("Total of column %d: %d\n",i+1,total);
    }
    // 4.
    int total = 0;
    for (i = 0; i < 3; i++){
        total += values[i][i];
    }
    for (i = 0; i< 3; i++){
        total += values[i][2-i];
    }
    printf("Total across both diagonals: %d", total);
    return 0;
}
