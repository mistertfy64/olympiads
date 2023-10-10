// C Program to print Array
// of strings
#include <stdio.h>

// Driver code
int main(){
    char arr[3][10] = {"deb", "sirin","school"};
    printf("String array Elements are:\n");
    int i = 0,j=0;
    for (i = 0; i < 3; i++)
    {
        printf("%c", toupper(arr[i][0]));
        j=1;
        while (arr[i][j]!='\0'){
            printf("%c",arr[i][j]);
            j++;
        }
    }
    return 0;
}
