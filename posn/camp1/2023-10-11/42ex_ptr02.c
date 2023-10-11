#include <stdio.h>
int main(){
    char s[999], d[999];
    char *sp = s, *dp = d;
    scanf("%s",s);
    while (*sp!='\0'){
        *dp=*sp;
        sp++;
        dp++;
    }
    *(dp++)='\0';
    printf("%s",d);
    return 0;
}
