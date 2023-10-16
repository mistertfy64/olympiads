#include <stdio.h>
int check(int n, int al, int a[]){
    int i;
    for (i = 0; i < al; i++){
        if ((int)n-48==a[i]) return 1;
    }
    return 0;
}

int main(){
    int A[] = {0,2,3,5,6,7,8,9};
    int B[] = {0,1,2,3,4,7,8,9};
    int C[] = {0,1,3,4,5,6,7,8,9};
    int D[] = {0,2,3,5,6,8,9};
    int E[] = {0,2,6,8};
    int F[] = {0,4,5,6,8,9};
    int G[] = {2,3,4,5,6,8,9};
    char screen[5][35];
    int i, j,d=0;
    for (i=0;i<5; i++){
        for (j = 0; j < 35; j++){
            screen[i][j]=' ';
        }
    }
    char N[6], digit[5][6];
    scanf("%s",N);
    for (i =0; i < 6 && N[i]!='\0';i++){
        //printf("%c ",N[i]);
        int x, y;
        for (x = 0; x < 5; x++){
            for (y =0 ; y < 6; y++){
                digit[x][y] = ' ';
            }
        }
        // segments
        // A
        if (check(N[i],8,A)){
            for (j =0; j < 6; j++){
                digit[0][j]='#';
            }
        }
        // B
        if (check(N[i],8,B)){
            for (j =0; j < 3; j++){
                digit[j][5]='#';
            }
        }
        // C
        if (check(N[i],9,C)){
            for (j =2; j < 5; j++){
                digit[j][5]='#';
            }
        }
        // D
        if (check(N[i],7,D)){
            for (j =0; j < 6; j++){
                digit[4][j]='#';
            }
        }
        // E
        if (check(N[i],4,E)){
            for (j =2; j < 5; j++){
                digit[j][0]='#';
            }
        }
        // F
        if (check(N[i],6,F)){
            for (j =0; j < 3; j++){
                digit[j][0]='#';
            }
        }
        // G
        if (check(N[i],7,G)){
            for (j =0; j < 6; j++){
                digit[2][j]='#';
            }
        }

        // copy them to screen
        int s = 0;
        for (s = 0; s< 5; s++){
            for (y = 0; y < 6; y++){
                // printf("%d\n",7*s+y);
                if (digit[s][y] == '#'){
                    screen[s][y+7*i] = digit[s][y];
                }
            }
            d++;
        }
    }
    // and finally, print
    int x,y ;
    for (x = 0; x < 5; x++){
        for (y = 0; y < 35; y++){
            printf("%c",screen[x][y]);
        }
        printf("\n");
    }
    return 0;
}
