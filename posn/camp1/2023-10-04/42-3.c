#include <stdio.h>
int main(){
    float usd;
    printf("Enter USD amount: ");
    scanf("%f", &usd);
    printf("USD%f is THB%.2f",usd,usd*37.5);
    return 0;
}
