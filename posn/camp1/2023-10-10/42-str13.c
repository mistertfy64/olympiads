#include <stdio.h>

int main(){
    char a[999],b[999];
    scanf("%s",a);
    int ok = strcmp(a,strrev(strcpy(b,a)))==0;
    printf("\"%s\" is %sa palindrome",a,ok?"":"not ");
    return 0;
}
