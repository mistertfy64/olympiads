#include <stdio.h>
int main(){
    int a, b, *pa = &a, *pb = &b;
    printf("Input first number: ");
    scanf("%d",&a);
    printf("Input second number: ");
    scanf("%d",&b);
    printf("Sum: %d\n",(*pa)+(*pb));
    printf("Difference: %d\n",(*pa)-(*pb));
    printf("Product: %d\n",(*pa)*(*pb));
    printf("Quotient: %d\n",(*pa)/(*pb));
    return 0;
}
