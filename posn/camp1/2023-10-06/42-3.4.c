#include <stdio.h>

int isPrime(int n){
    if (n==0||n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    int f = 2;
    while (f<n){
        if (n%f==0){
            return 0;
        }
        f++;
    }
    return 1;
}

int main(){
    int n,i,total=0;
    scanf("%d",&n);
    for (i=1; i <= n;i++)
    if (isPrime(i)){
            total++;
        printf("%d is prime.\n",i);
    }
    printf("%d prime numbers.",total);
    return 0;
}
