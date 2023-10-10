#include <stdio.h>
int main(){
    int x, y;
    for (x = 0; x < 5; x++){
        for (y = 0; y < 5; y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
