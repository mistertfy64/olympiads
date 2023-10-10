#include <stdio.h>

int main(){
    char b;
    char s[999];
    int h,w,n,i,j,sl=0;
    printf("Input String: ");
    scanf("%[^\n]s",s);
    printf("Input Height: ");
    scanf("%d",&h);
    printf("Input Width: ");
    scanf("%d",&w);
    printf("Input Border Character: ");
    scanf("%s",&b);
    printf("Input Border Width: ");
    scanf("%d",&n);
    while (s[sl]!='\0'){
        sl++;
    }
    int l = sl*w+n*2;
    for (i = 0; i < n; i++){
        for (j=0;j<l;j++){
            printf("%c",b);
        }
        printf("\n");
    }
    for (i = 0; i < h; i++){
        for (j = 0;j<sl*w+n*2;j++){
            if (j<=n-1||j>sl*w+1){
                printf("%c",b);
            } else {
                printf("%c",s[(j-n)%sl]);
            }
        }
        printf("\n");
    }
    for (i = 0; i < n; i++){
        for (j=0;j<l;j++){
            printf("%c",b);
        }
        printf("\n");
    }
}
