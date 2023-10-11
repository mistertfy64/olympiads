#include <stdio.h>
int main(){
    char s[100], *p = s;
    int t=0;
    scanf("%s",s);
    while (*p!='\0'){
        if (*p==47||*p==49||*p==51||*p==53||*p==55){
            t++;
        }
        p++;
    }
    printf("Total odd digits: %d",t);
    return 0;
}
