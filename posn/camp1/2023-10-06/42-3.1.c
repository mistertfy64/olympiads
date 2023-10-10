#include <stdio.h>
int main(){
    float avg;
    int i = 0;
    for (i = 0; i < 10; i++){
        float input;
        scanf("%f",&input);
        avg += input/10;
    }
    printf("Average: %f",avg);
    return 0;
}
