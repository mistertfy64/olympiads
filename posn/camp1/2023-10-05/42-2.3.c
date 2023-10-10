#include <stdio.h>

int main()
{
    int id;
    float base, overtime, bonus;
    printf("Enter your employee ID: ");
    scanf("%d",&id);
    printf("Enter your base salary: ");
    scanf("%f",&base);
    printf("Enter your overtime salary: ");
    scanf("%f",&overtime);
    float subtotal = base+overtime;
    if (subtotal >= 100000){
        bonus = subtotal*10/100;
    } else if (subtotal >= 70000){
        bonus = subtotal*7/100;
    }else if (subtotal >= 50000){
        bonus = subtotal*5/100;
    }else if (subtotal >= 30000){
        bonus = subtotal*3/100;
    }else {
        bonus = subtotal*1/100;
    }
    printf("Hello, Employee #%d, your final salary after bonus is %.2f",id,subtotal+bonus);
    return 0;
}
