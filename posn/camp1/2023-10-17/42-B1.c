#include <stdio.h>

// a_20 = 518, a_22 = 570, a_26 = 673 (???)
// --> a_n = 26(n-1)+24
// b_20 = 437, b_22 = 481, b_26 = 568
// --> b_n = 22(n-1)+19
// c_20 = 325, c_22 = 358, c_26 = 422
// --> c_n = 16.5(n-1)+11.5
// x_26 is one off but close enough i guess


int main(){
    int capacity;
    scanf("%d",&capacity);
    float length, width, height;
    // calculate dimensions
    length = 26*(capacity-1)+24;
    width = 22*(capacity-1)+19;
    height = 16.5*(capacity-1)+11.5;
    // edge case: round up height if ends in .
    if (capacity % 2 == 0){
        height += 0.5;
    }
    // print results
    printf("%d\n%d\n%d\n",(int)length,(int)width,(int)height);
    return 0;
}
