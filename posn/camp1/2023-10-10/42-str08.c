#include <stdio.h>

int main(){
    char f[20];
    char s[30];
    char g[7];
    printf("Enter first name: ");
    scanf("%s",f);
    printf("Enter surname: ");
    scanf("%s",s);
    printf("Enter gender: ");
    scanf("%s",g);
    if (strcmp(g,"Male")==0){
        printf("Mr. ");
    } else if (strcmp(g,"Female")==0){
        printf("Mrs. ");
    }
    printf("%s %s",f,s);
    printf("\n");
    return 0;
}
