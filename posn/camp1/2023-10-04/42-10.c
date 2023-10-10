#include <stdio.h>
int main(){
    const float PI = 3.14159;
    float radius, length;
    printf("Input radius of cone: ");
    scanf("%f",&radius);
    printf("Input length/height of cone: ");
    scanf("%f",&length);
    printf("Surface area of cone: %f\n", PI*radius*length+PI*radius*radius);
    printf("Volume of cone: %f\n", PI*radius*radius*length/3);
    return 0;
}
