#include <stdio.h>
int main(){
    char s[999], *p = s, t = 0;
    printf("Enter a string: ");
    scanf("%s",s);
    while (*p != '\0'){
        t++;
        p++;
    }
    printf("String length: %d\n",t);
    return 0;
}
