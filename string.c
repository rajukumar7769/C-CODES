#include <stdio.h>
#include<string.h>

void printstring(char arr[]);
int countlength(char arr[]);

int main() {
    //  char firstname[] ="RAJU";
    //  char lastname[] ="KUMAR";

    //  printstring(firstname);
    //  printstring(lastname);

    // printf("%s\t%s", firstname,lastname);
     

    char name[] = "Raju";
     printf("lenght is : %d",strlen(name));
    return 0;
}
int countlength(char arr[]) {
    int count = 0;
    for (int i=0; arr[i]!='\0'; i++) {
        count++;
    }
    return count-1;
}



void printstring(char arr[]) {
    for(int i=0; arr[i] != '\0';i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}