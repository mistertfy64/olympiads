#include <stdio.h>
int main(){
    char a = 'A', *p = &a;
    while (*p < 65+26){
        printf("%c ",*p);
        a++;
    }
    printf("\n");
    return 0;
}
