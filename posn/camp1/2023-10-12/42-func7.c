#include <stdio.h>
int calls = 0;
int dp[9999] = {-1};
int f(int a){
    if (a==0){
        return 0;
    } else if (a<2){
        return 1;
    } else if (dp[a]!=-1){
       return dp[a];
    }
    calls++;
    int r = f(a-1)+f(a-2);
    dp[a]=r;
    return r;
}
int main(){
    int i,x;
    for (i = 0;i <9999 ;i++){
        dp[i]=-1;
    }
    scanf("%d",&x);
    f(x);
    for (i = 1; i <= x; i++){
        printf("%d ",f(i));
    }
    printf("\n");
    return 0;
}
