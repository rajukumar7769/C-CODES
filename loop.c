#include<stdio.h>

int main() { 
   int n;
   printf("enter number: ");
   scanf("%d", &n);

//    for (int i=n; i>=0; i--) {
//    printf("%d\n", i);
//    }
     
     int i=n;
     while (i>=0){
         printf("%d\n", i);
         i--;
     }
     
    // int sum =0;
    // for (int i=1, j=n; i<=n && j>=1; i++,j--) {
    //     sum = sum + j; //sum +=i
    //     printf("%d\n", j);
    // }
    // printf("sum is %d\n", sum); 

    //  for (int i=n; i>=1; i--) {
    //      printf("%d\n", i);
    // }

    return 0;
}