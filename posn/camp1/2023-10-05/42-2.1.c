#include <stdio.h>

int main()
{
    float avg;
    int i = 0;
    for (i =0; i < 4; i++){
        float k;
        printf("Please enter your score out of 100 for test #%d: ",i+1);
        scanf("%f",&k);
        if (k>100||k<0){
            printf("Invalid Input!");
            return 0;
        }
        avg += k/4.0;
    }
    printf("Your average score is %f",avg);
    return 0;
}
