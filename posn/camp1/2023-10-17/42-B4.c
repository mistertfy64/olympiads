#include <stdio.h>

// 1-2 -> 1
// 3-4 -> 2
// 5-8 -> 3
// 9-16 -> 4
// 17 + -> 5
int f(int n){
    if (n > 16){
        return 5; // width: 64
    }
    if (n>8){
        return 4; // width: 32
    }
    if (n>4){
        return 3; // width: 16
    }
    if (n>2){
        return 2; //width: 8
    }
    return 1; // width: 4
}


int main(){
    int i, fruits, levels, k =0;
    scanf("%d",&fruits);
    int levels = f(fruits);
    int widths[] = {2,4,8,16,32,64};
    for (i = levels; i > 0;k++){
        int center = widths[levels]/2+1;

    }
    return 0;
}
