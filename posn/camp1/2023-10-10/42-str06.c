#include <stdio.h>

int main(){
    char s[20];
    scanf("%[^\n]s",s);
    int i,l = strlen(s);
    for (i = l-1; i>=0;i--){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
