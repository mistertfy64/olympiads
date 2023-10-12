#include <stdio.h>

int recursivePower(int x, int y);

int main(){
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter another: ");
    scanf("%d",&y);
    printf("%d\n",recursivePower(x,y));
    return 0;
}

int recursivePower(int x, int y){
    if (y==0) {
        return 1;
    } else if (y==1){
        return x;
    }
    return x*recursivePower(x,y-1);
}
