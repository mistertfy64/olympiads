#include <stdio.h>

int main(){
    char s[106];
    int freq[26]={0};
    int i = 0;
    printf("S = ");
    scanf("%s",s);
    while (s[i]!='\0'){
        freq[s[i]-97]++;
        i++;
    }
    int ok[26] = {0},ng = 1;
    for (i = 0; i < 26 ;i++){
        ok[i] = freq[i]==1;
    }
    i = 0;
    while (s[i]!='\0'){
        if (ok[s[i]-97]){
            printf("%c",s[i]);
            ng = 0;
            break;
        }
        i++;
    }
    if (ng){
        printf("$");
    }
    printf("\n");
}
