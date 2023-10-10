#include <stdio.h>
int main(){
    int a,b,c;
    printf("Input three space-separated values a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    int answer = a+b*(2*c-3/(2*a));
    printf("a+b*(2*c-3/(2*a) is %d",answer);
    return 0;
}
