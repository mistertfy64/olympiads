#include <stdio.h>
int main(){
    int i,t =0;
    char s[999], *p = s, *p2=s;
    printf("Enter a string: ",s);
    scanf("%s",s);
    while (*p != '\0'){
        t++;
        p++;
    }
    for (i = t-1; i >=0;i--){
        printf("%c",*(p2+i));
    }
    printf("\n");
    return 0;
}
