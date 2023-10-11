#include <stdio.h>
int main(){
    // e.g.
    int a[10] ={0,3,0,0,0,2,3,4,5,6};
    int b[10] ={0,3,9,8,7,2,3,4,5,6};
    int *pa = a, *pb = b;
    long total = 0;
    int i = 0;
    while (i<10){
        long c = 1;
        int j = 0;
        for (j = 0; j < 9-i; j++){
            c*=10;
        }
        long d = *pa + *pb;
        total += c*d;
        pa++;
        pb++;
        i++;
    }
    printf("Total: %ld",total);
    return 0;
}
