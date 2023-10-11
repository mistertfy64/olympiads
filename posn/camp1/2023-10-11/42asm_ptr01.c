#include <stdio.h>
int main(){
    int a[10], *p = a, i = 0, total = 0;
    printf("Enter 10 integers: ");
    while (i<10){
        scanf("%d",p);
        i++;
        p++;
    }
    p = a;
    i = 0;
    while (i < 10){
        total += *p;
        i++;
        p++;
    }
    printf("Total: %d\n",total);
    return 0;
}
