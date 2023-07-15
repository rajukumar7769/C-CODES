#include<stdio.h>

int main(){
    int a = 10,b;
    printf("a=%d\n",a);
    b=++a;
    printf("pre =%d\n",b);
    b=a++;
    printf("post = %d\n",b);
    printf("final a= %d\n",a);
}