#include <stdio.h>
int main(){
    char s[11], d[11];
    char *sp = s, *dp = d;
    printf("Enter string: ");
    scanf("%s",s);
    while (*sp!='\0'){
        *dp=*sp;
        sp++;
        dp++;
    }
    *(dp++)='\0';
    printf("Copied string: %s\n",d);
    return 0;
}
