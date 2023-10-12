#include <stdio.h>

int square(n){
    return n*n;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Squared: %d",square(n));
    return 0;
}
