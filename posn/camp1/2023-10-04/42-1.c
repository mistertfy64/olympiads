#include <stdio.h>

int main(){
    int i = 0;
    // line 1
    for (i = 0; i < 10; i++){
        printf("%s","+---");
    }
    printf("%s\n","+");
    // line 3
    for (i = 0; i < 10; i++){
        printf("| %d ",i);
    }
    printf("%s\n","|");
    // line 5
    for (i = 0; i < 10; i++){
        printf("%s","+---");
    }
    printf("%s\n","+");
    return 0;
}
