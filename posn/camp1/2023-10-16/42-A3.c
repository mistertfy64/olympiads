#include <stdio.h>
int main(){
    int N, i, j, ok = 1;
    int array[10][10], appeared[101] = {0};
    scanf("%d",&N);
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            array[i][j] = 0;
            scanf("%d",&array[i][j]);
            appeared[array[i][j]] = 1;
        }
    }
    for (i = 1; i <= N*N; i++){
        if (appeared[i]==0){
            ok = 0;
            printf("%d ",i);
        }
    }
    if (ok){
        printf("perfect");
    }
    printf("\n");
    return 0;
}
