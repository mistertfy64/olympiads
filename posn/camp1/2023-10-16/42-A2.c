#include <stdio.h>
int main(){
    char pattern[1001], modified[1001], hazard[2], appeared[26] = {0};
    int i = 0;
    fgets(pattern,1001,stdin);
    fgets(hazard,2,stdin);
    for (i = 0; i < 1001 && pattern[i]!='\0'; i++){
        if (pattern[i] == hazard[0]){
            modified[i] = pattern[i];
            continue;
        } else {
            if (appeared[(int)pattern[i]-97]==0){
                modified[i] = pattern[i];
                appeared[(int)pattern[i]-97]=1;
            } else {
                modified[i] = '-';
            }
        }
    }
    modified[i] = '\0';
    for (i = 0; i <1001&&modified[i]!='\0';i++){
        if (modified[i]=='-'){
            continue;
        }
        printf("%c",modified[i]);
    }
    printf("\n");
    return 0;
}
