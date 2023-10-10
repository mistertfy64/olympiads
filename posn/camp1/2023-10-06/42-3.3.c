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
    int n;
    scanf("%d",&n);
    if (isPrime(n)){
        printf("%d is prime.\n",n);
    } else {
        printf("%d is not prime.\n",n);
    }
    return 0;
}
