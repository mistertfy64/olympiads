#include <stdio.h>

int f(int x){
    if (x==1){
        return 1;
    } else {
        return x+f(x-1);
    }
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d\n",f(a));
    return 0;
}
