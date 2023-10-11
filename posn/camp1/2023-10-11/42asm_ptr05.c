#include <stdio.h>
int main(){
    char s1[100], *p1 = s1;
    int l = 0, i = 0,ok = 1;
    printf("Enter string: ");
    scanf("%s",s1);
    while (*p1 != '\0'){
        p1++;
        l++;
    }
    // check
    char *c = s1, *c2 = s1-1+l;
    for (i = 0; i < l;i++){
        if (*c != *c2){
            ok = 0;
        }
        c++;
        c2--;
    }
    printf("%s\n",ok?"yes":"no");
    return 0;
}
