#include<stdio.h>

int main () {
    // 2 x 3
    int marks[2][3]; // _ _ _ | _ _ _
   
    marks[0][0] = 89;
    marks[0][1] = 97;
    marks[0][2] = 98;

    marks[1][0] = 79;
    marks[1][1] = 67;
    marks[1][2] = 88;

    printf("%d", marks[0][2]); 

    return 0;
}