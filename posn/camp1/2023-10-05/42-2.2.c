#include <stdio.h>

int main()
{
    int odds = 0, evens = 0, i = 0;
    for (i = 0; i < 5; i++){
        int k;
        printf("Enter an integer: ");
        scanf("%d",&k);
        if (k%2==1){
            odds++;
        } else if (k%2==0) {
            evens++;
        }
    }
    printf("You entered %d odd numbers and %d even numbers",odds,evens);
    return 0;
}
