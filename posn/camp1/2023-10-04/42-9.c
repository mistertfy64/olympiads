#include <stdio.h>
int main(){
    float x;
    printf("Input a number x: ");
    scanf("%f",&x);
    printf("2x^2+2x+3 = %f",x*x*2+x*2+3);
    return 0;
}
