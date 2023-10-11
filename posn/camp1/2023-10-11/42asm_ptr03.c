#include <stdio.h>
int main(){
    char s1[100],s2[100], *p1=s1,*p2=s2;
    int ok = 1,i = 0,freq1[256]={0},freq2[256]={0};
    printf("Enter a string: ");
    scanf("%s",s1);
    printf("Enter another string: ");
    scanf("%s",s2);
    while (*p1 != '\0'){
        freq1[*p1]++;
        p1++;
    }
    while (*p2 != '\0'){
        freq2[*p2]++;
        p2++;
    }
    for (i = 0; i < 256; i++){
        if (freq1[i]!=freq2[i]) {
            ok = 0;
        }
    }
    printf("%s\n",ok?"yes":"no");
    return 0;
}
