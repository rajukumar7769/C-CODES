#include<stdio.h>

int main() {
   int a=15,b,c=20,d;
   b=a=a+1;
   printf("%d \n%d \n",a,b);
   d=c=c+1;
   printf("%d \n%d \n",c,d);
    return 0;

}