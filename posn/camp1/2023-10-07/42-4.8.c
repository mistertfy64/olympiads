#include <stdio.h>

int main(){
    float A[3][2], B[3][2];
    int i, j;
    for (i = 0; i < 3; i++){
        scanf("%f %f", &A[i][0],&A[i][1]);
    }
    for (i = 0; i < 3; i++){
        scanf("%f %f", &B[i][0],&B[i][1]);
    }
    for (i = 0; i < 3; i++){
        printf("%.3f %.3f\n", A[i][0]+B[i][0],A[i][1]+B[i][1]);
    }
    return 0;
}
