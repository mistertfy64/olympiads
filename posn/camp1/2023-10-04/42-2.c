#include <stdio.h>
int main(){
    char name[100];
    int classwork1,classwork2,midterm,finals;
    printf("What's your name?\n");
    gets(name);
    printf("Classwork #1 (out of 20): ");
    scanf("%d",&classwork1);
    printf("Midterm (out of 20): ");
    scanf("%d",&midterm);
    printf("Classwork #2 (out of 30): ");
    scanf("%d",&classwork2);
    printf("Finals (out of 30): ");
    scanf("%d",&finals);
    printf("Hello %s, your total score is %d out of 100",name,classwork1+classwork2+midterm+finals);
    return 0;
}
