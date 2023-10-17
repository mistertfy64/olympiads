#include <stdio.h>
void printNumber(int n){
    switch (n){
        case 0: {
            printf("zero");
            break;
        }
        case 1: {
            printf("one");
            break;
        }
        case 2: {
            printf("two");
            break;
        }
        case 3: {
            printf("three");
            break;
        }
        case 4: {
            printf("four");
            break;
        }
        case 5: {
            printf("five");
            break;
        }case 6: {
            printf("six");
            break;
        }
        case 7: {
            printf("seven");
            break;
        }
        case 8: {
            printf("eight");
            break;
        }
        case 9: {
            printf("nine");
            break;
        }
    }
    printf(" ");
}

int main(){
    char N[4];
    int i = 0;
    scanf("%s",N);
    for (i = 0; i < N && N[i]!='\0'; i++){
        printNumber((int)N[i]-48);
    }
    printf("\n");
    return 0;
}
