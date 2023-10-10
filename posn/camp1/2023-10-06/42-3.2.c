#include <stdio.h>
int main(){
    int i=0,highest = -2000000000, lowest=2000000000;
    for (i = 0; i < 10; i++){
        int input;
        scanf("%d",&input);
        if (input > highest){
            highest = input;
        }
        if (input < lowest){
            lowest = input;
        }
    }
    printf("Highest number is %d and lowest number is %d",highest,lowest);
    return 0;
}
