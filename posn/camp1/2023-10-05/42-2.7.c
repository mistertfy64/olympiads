#include <stdio.h>

int main()
{
    float radius;
    int choice;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Calculator Menu:\n");
    printf("\t1. Find area\n");
    printf("\t2. Find circumference\n");
    printf("Choose menu: ");
    scanf("%d",&choice);
    if (choice == 1) {
        printf("Area = %.3f", 3.14*radius*radius);
    } else if (choice == 2){
        printf("Circumference = %.3f", 3.14*radius*2);
    }
    return 0;
}
