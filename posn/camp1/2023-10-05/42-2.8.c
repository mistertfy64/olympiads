#include <stdio.h>

int main()
{
    float area, cost;
    printf("Please input area: ");
    scanf("%f",&area);
    if (area < 80){
        cost = area*12.5;
    } else if (area < 200){
        cost = area * 10;
    } else if (area < 400){
        cost = area* 7.5;
    } else {
    cost = area*5;
    }
    printf("Total service cost: %.2f baht", cost);
    return 0;
}
