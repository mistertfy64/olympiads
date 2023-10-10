#include <stdio.h>

int main(){
    char s[999];
    printf("Enter string: ");
    scanf("%[^\n]s",s);
    int t = 0, n = 0, c = 0, v = 0;
    while (s[t] != '\0'){
        t++;
        if (s[t]>=48&&s[t]<=57){
            n++;
        } else if (s[t]=='A'||s[t]=='E'||s[t]=='I'||s[t]=='O'||s[t]=='U'||s[t]=='a'||s[t]=='e'||s[t]=='i'||s[t]=='o'||s[t]=='u'){
            v++;
        } else {
            c++;
        }
    }
    printf("Total characters: %d\nNumbers: %d\nVowels: %d\nConsonants: %d\n",t,n,v,c);
    return 0;
}
