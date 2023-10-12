#include <stdio.h>

int solve(int o, int x1, int x2){
    switch (o){
        case 1: {
            return x1+x2;
        }
        case 2: {
            return x1-x2;
        }
        case 3: {
            return x1*x2;
        }
        case 4: {
            return x1/x2;
        }
    }
}

int main(){
    int a,x1,x2;
    printf("============= Menu ============\n");
    printf("# 1. ADD                      #\n");
    printf("# 2. SUBTRACT                 #\n");
    printf("# 3. MULTIPLY                 #\n");
    printf("# 4. DIVIDE                   #\n");
    printf("# PLEASE SELECT MENU 1-4      #\n");
    printf("=================================\n");
    scanf("%d",&a);
    printf("Enter 2 integers: ");
    scanf("%d %d",&x1,&x2);
    printf("%d\n",solve(a,x1,x2));
    return 0;
}
