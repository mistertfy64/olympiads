#include <stdio.h>
int main(){
    char selection;
    printf("+----+----+----+Menu+----+----+----+\n");
    printf("\t1. Candy\n");
    printf("\t2. Water\n");
    printf("\t3. Snack\n");
    printf("\t4. Pepsi\n");
    printf("+----+----+----+----+----+----+----+\n");
    printf("Make your selection: ");
    selection = getche("%c");
    printf("\nYou selected menu %c",selection);
    return 0;
}
