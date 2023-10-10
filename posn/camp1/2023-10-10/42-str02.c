#include <stdio.h>
int main(){
    char *name = "Hello123";
    // scanf("%[^\n]s", &name);
    while (*name != '\0'){
        printf("%c\n",*name++);
    }
    return 0;
}
