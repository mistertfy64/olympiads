#include <stdio.h>

int main()
{
    float seconds;
    int d,h,m,s;
    printf("Enter time in seconds: ");
    scanf("%f",&seconds);
    d = (int) floor(seconds/(60*60*24));
    seconds-=d*60*60*24;
    h = (int) floor((seconds)/(60*60));
    seconds-=h*60*60;
    m = (int) floor((seconds)/60);
    seconds-=m*60;
    printf("%d days %d hours %d minutes %.2f seconds",d,h,m,seconds);
    return 0;
}
