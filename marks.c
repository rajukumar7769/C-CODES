#include<stdio.h>

int main(){
       int marks;
       printf("Enter the marks : ");
       scanf("%d", &marks);

       if ( marks >40) {
           printf("You Pass The Exam Successfully!!! \n");
           printf("You Are Great '-' \n");

       }
       else {
           printf("You Failed The Exam \n ");
           printf("Do More Practice \n");
       }
      printf("Thanks For Attending The Exam");
 return 0;
}