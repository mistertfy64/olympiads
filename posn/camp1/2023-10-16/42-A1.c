#include <stdio.h>
int main(){
    int tally[51], i = 0, j = 0, k=0, highest = 0, candidates, voters;
    scanf("%d",&candidates);
    for (i =0; i < candidates; i++){
        tally[i]=0;
    }
    scanf("%d",&voters);
    for (i = 0; i < voters; i++){
        int vote;
        scanf("%d",&vote);
        tally[vote-1]++;
    }
    for (i = 0; i < candidates; i++){
        printf("%d ", tally[i]);
        if (tally[i]>highest){
            highest = tally[i];
        }
    }
    printf("\n");
    k = highest;
    // one column
    for (i = 0; i < highest + 1; i++){
        // one row
        for (j = 0; j < 3*candidates; j++){
            // printf("%d %d %d\n",i,j,k);
            int c = j/3;
            if (j%3==0&&i==highest){
                printf("%d",c+1);
                if (c+1>=10){
                    printf(" ");
                }
                continue;
            }
            if (j%3==0&&tally[c]>=k){
                printf("*");
            } else {
                printf(" ");
            }
        }
        k--;
        printf("\n");
    }
    return 0;
}
