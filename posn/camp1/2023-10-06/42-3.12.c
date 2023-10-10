#include <stdio.h>
int main(){
    int start, days, i, j, p;
    scanf("%d",&start);
    scanf("%d",&days);
    p = start-1;
    for (j = 0; j < p; j++){
        printf("\t  ");
    }
    for (i = 1; i <= days; i++){
        if (i<10){
            printf("\t %d",i);
        } else {
            printf("\t%d",i);
        }
        p++;
        if (p%7==0){
            printf("\n");
        }
    }
    for (i = 1; i <= days; i++){
        if (i<10){
            printf("\t %d",i);
        } else {
            printf("\t%d",i);
        }
        p++;
        if (p%7==0){
            printf("\n");
        }
    }
    for (i = 1; i <= days; i++){
        if (i<10){
            printf("\t %d",i);
        } else {
            printf("\t%d",i);
        }
        p++;
        if (p%7==0){
            printf("\n");
        }
    }
    return 0;
}
