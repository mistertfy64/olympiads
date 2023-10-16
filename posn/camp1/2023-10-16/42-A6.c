#include <stdio.h>
// EDGE CASE: sometimes print spaces
int main(){
    char useless[100], numbers[1000][31];
    int N,i,h=0,k;
    scanf("%d",&N);
    for (i =0 ; i < 1000; i++){
        for (k = 0; k < 31; k++){
            numbers[i][k]= ' ';
        }
    }
    // hacky way
    fgets(useless,100,stdin);
    for (i = 0; i < N; i++){
        fgets(numbers[i],30,stdin);
    }
    for (i =0 ; i < N; i++){
        int j = 0, l =0;
        for (j = 0; numbers[i][j]!='\0'; j++){
            l++;
        }
        if (l>h){
            h=l;
        }
    }
    int center = h/2-1;
    for (i = 0; i < N; i++){
        if (numbers[i][center]=='\n'){
            printf("");
        } else {
            printf("%c",numbers[i][center]);
        }
        if (numbers[i][center+1]=='\n'){
            printf("");
        } else {
            printf("%c",numbers[i][center+1]);
        }
    }
    printf("\n");
    return 0;
}
