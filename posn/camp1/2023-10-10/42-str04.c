#include <stdio.h>
int main(){
    char s[20];
    int i = 0, count = 0;
    scanf("%[^\n]s",s);
    for (i = 0; i < 20; i++){
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            count++;
        }
    }
    printf("There are %d vowels in the string.\n",count);
    return 0;
}
