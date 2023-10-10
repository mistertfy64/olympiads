#include <stdio.h>

int main(){
    int A[4], B[4], i=0,j=0,matches=0;
    for (i = 0; i < 4; i++){
        scanf("%d",&A[i]);
    }
    for (i = 0; i < 4; i++){
        scanf("%d",&B[i]);
    }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (A[i]==B[j]){
                matches++;
                break;
            }
        }
    }
    printf("There are %d matches.",matches);
    return 0;
}
