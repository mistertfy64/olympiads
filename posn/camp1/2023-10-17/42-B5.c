#include <stdio.h>

int main(){
    char correct[1001];
    char results[1001];
    int sample[26];
    int i,N,t=0;
    scanf("%s",correct);
    scanf("%d",&N);
    for (i = 0; i < 26; i++){
        sample[i]=0;
    }
    for (i = 0; i < 1001 && correct[i] != '\0'; i++){
        t++;
        sample[(int)correct[i]-65]++;
    }
    int db = 0;
    for (i =0 ; i < N; i++){
        char molecules[1001];
        int appearences[26];
        int k = 0;
        for (k = 0; k < 26; k++){
            appearences[k] = 0;
        }
        scanf("%s",molecules);
        int j;
        for (j = 0; j < t && molecules[j]!='\0'; j++){
            appearences[(int)molecules[j]-65]++;
        }
        int ok = 1;
        for (j = 0; j < 26; j++){
            if (appearences[j]!=sample[j]){
                ok = 0;
            }
        }
        results[i]=ok?'1':'0';
    }
    results[i]='\0';
    for (i = 0; i < 1001 && results[i]!='\0'; i++){
        printf("%s\n",results[i]=='1'?"YES":"NO");
    }
    return 0;
}
