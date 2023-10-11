#include <stdio.h>
int main(){
    char s[100],*p=s;
    int t = 0;
    scanf("%s",s);
    while (*p!='\0'){
        if (*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'){
            t++;
        }
        p++;
    }
    printf("Total vowels: %d\n",t);
    return 0;
}
