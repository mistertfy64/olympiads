#include <stdio.h>

void draw(n){
    int i;
    for (i = 1; i <= 12; i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    draw(n);
    return 0;
}
