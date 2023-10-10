#include <stdio.h>

int main(){
    char s[19];
    int s1[16], total=0;
    printf("Enter credit card number with dashes: ");
    scanf("%s",s);
    int i = 18,j=15;
    for (i = 18;i>=0;i--){
        if (s[i]=='-'){
            continue;
        }
        s1[j]=s[i]-48;
        j--;
    }
    for (i = 0; i < 16; i++){
        if (i%2==1){
            int q1, q = s1[i]*2;
            if (q>9){
                q1 = q-10;
            }
            total += q1 + q;
        } else {
            total += s1[i];
        }
    }
    printf("%sVALID",total%10==0?"":"IN");
    return 0;
}
