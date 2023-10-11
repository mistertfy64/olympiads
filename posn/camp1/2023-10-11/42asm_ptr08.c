#include <stdio.h>
// not using pointers for this one lol
int main(){
    int a[10] = {18,20,32,2,0,-5,15,102,90,1};
    int i = 0, j = 0;
    for (i = 0; i < 10; i++){
        for (j = i+1; j < 10; j++){
            if (a[j]<a[i]){
                int t = a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    for (i = 0; i < 10; i++){
        printf("%d " ,a[i]);
    }
    printf("\n");
    return 0;
}
