#include <stdio.h>
int main(){
    char s[100], *p = s;
    printf("Enter a string: ");
    scanf("%s",s);
    printf("Capitalized string: ");
    while (*p!='\0'){
        if (*p>=97&&*p<=97+25){
            printf("%c",*p-32);
        } else {
            printf("%c",*p);
        }
        p++;
    }
    printf("\n");
    return 0;
}
