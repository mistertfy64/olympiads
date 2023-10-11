#include <stdio.h>
int main(){
    int p[5], i=0, *q = p;
    float avg;
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++){
        scanf("%d",&p[i]);
    }
    for (i = 0; i < 5; i++){
        int s = *q;
        avg += s/5.0;
        q++;
    }
    printf("Average: %f",avg);
    return 0;
}
