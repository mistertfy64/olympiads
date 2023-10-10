#include <stdio.h>
int main(){
    char start,c;
    scanf("%c",&start);
    if ('a'<=start&&start<='z'){
        start-=32;
    }
    for (c = start; c >= 'A'; c--){
        printf("%c",c);
    }
    return 0;
}
