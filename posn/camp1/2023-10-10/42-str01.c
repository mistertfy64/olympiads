#include <stdio.h>
int main(){
    char name[69];
    int i = 0;
    scanf("%[^\n]s", &name);
    while (name[i]!='\0'){
        if (i%2==0){
            printf("%c",name[i]);
        }
        i++;
    }
    return 0;
}
