#include <stdio.h>
float calculate(int n){
    int i;
    float r =1;
    if (n < 0){
        for (i = 0; i < -n; i++){
            r/=2;
        }
    } else {
        for (i = 0; i < n; i++){
            r*=2;
        }
    }
    return r;
}

int main(){
    int n,i;
    scanf("%d",&n);
    if (n < 0){
        for (i=1; i >=n; i--){
            printf("%d\t%f\n",i,calculate(i));
        }
    } else {
        for (i=1; i <= n; i++){
            printf("%d\t%f\n",i,calculate(i));
        }
    }
    return 0;
}
