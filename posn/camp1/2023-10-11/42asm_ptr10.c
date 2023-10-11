#include <stdio.h>
int main(){
    char s[100];
    char t[100];
    printf("Enter string: ");
    scanf("%s",s);
    printf("Enter substring: ");
    scanf("%s",t);
    int k=0, l = 0, found = 0, finding = 0, i = 0, f = 0;
    char *p = s, *q = t;
    while (*q!='\0'){
        l++;
        q++;
    }
    q = t;
    while (!(found || *p == '\0')){
        if (!finding&&*p==*q){
            finding = 1;
            f = i+1;
            k=1;
            q++;
        } else if (finding) {
            if (k==l){
                found = 1;
                continue;
            } else if (*q!=*p){
                finding = 0;
                q = t;
                f = 0;
                k = 0;
            } else {
                q++;
                k++;
            }
        } else {
            q = t;
        }
        p++;
        i++;
        if (k==l){
            found = 1;
        }
    }
    printf("%d\n",found?f:0);
    return 0;
}
