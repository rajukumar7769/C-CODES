#include<stdio.h>


int main() {

    float principal,rate,time;

    printf("Enter principal = ");
    scanf("%f",&principal);

    printf("Enter rate = ");
    scanf("%f", &rate);
    

    printf("Enter time = ");
    scanf("%f", &time);

    float SI = (principal*rate*time)/100; 

    printf ("SI is = %f", SI );

    return 0;

}