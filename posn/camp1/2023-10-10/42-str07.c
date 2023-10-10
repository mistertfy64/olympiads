#include <stdio.h>

int main(){
    char s[14];
    int i = 0, j = 0;
    printf("Enter ID card number: ");
    scanf("%s",s);
    for (i = 0; i < 17;i++){
        if (i==1||i==6||i==12||i==15){
            printf("-");
        } else {
            printf("%c",s[j]);
            j++;
        }
    }
    printf("\n");
    return 0;
}
