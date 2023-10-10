#include <stdio.h>

int main(){
    char s[20];
    int i = 0;
    scanf("%[^\n]s",s);
    while (s[i]!='\0'){
        if (s[i]>='A'&&s[i]<='Z'){
            printf("%c",s[i]+32);
        } else if (s[i]>='a'&&s[i]<='z'){
            printf("%c",s[i]-32);
        } else {
            printf("%c",s[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
