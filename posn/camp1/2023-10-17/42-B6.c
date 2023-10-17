#include <stdio.h>

int main(){
    int length, width, x, y, i=0;
    char useless[1001], pattern[1001];
    scanf("%d",&width);
    scanf("%d",&length);
    scanf("%c",useless);
    scanf("%[^\n]s",pattern);
    // remove newline from pattern
    int a = 0;
    for (y = 0; y < length; y++){
        for (x = 0; x < width; x++){
            if (pattern[i]=='\0'){
                i = 0;
            }
            if (pattern[i]!='\n'){
                printf("%c",pattern[i]);
            } else {
                printf("");
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}
