#include <stdio.h>

int main(){
    char s[106];
    char s2[55][106] = {""};
    int i = 0, m = 0, n = 0;
    printf("S = ");
    scanf("%s",s);
    for (i = 0; i < 106 && s[i]!='\0'; i++){
        if (s[i] == '.'){
            n++;
            s2[m][n]='\0';
            m++;
            n=0;
            continue;
        }
        s2[m][n] = s[i];
        n++;
    }
    for (i = 0; i < m+1; i++){
        printf("%s",s2[m-i]);
        if (i<m){
            printf(".");
        }
    }
    return 0;
}
