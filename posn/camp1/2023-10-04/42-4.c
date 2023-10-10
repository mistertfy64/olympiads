#include <stdio.h>
int main(){
    float kg;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    printf("%fkg is %flbs",kg,kg*2.20462262);
    return 0;
}
