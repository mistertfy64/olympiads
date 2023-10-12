#include <stdio.h>

int highest(int a,int b,int c){
    int highest = -2000000000;
    if (a>highest){
        highest = a;
    }
    if (b>highest){
        highest = b;
    }
    if (c>highest){
        highest = c;
    }
    return highest;
}

int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Highest: %d\n",highest(a,b,c));
    return 0;
}
