#include <stdio.h>

int main()
{
        char c;
        printf("Enter a character: ");
        scanf("%c",&c);
        int code = (int)c;
        if (65 <= code && code <= 90){
            printf("%c\n",(char)code+32);
        } else if (97 <= code && code <= 122){
            printf("%c\n",(char)code-32);
        } else {
            printf("error");
        }
    return 0;
}
