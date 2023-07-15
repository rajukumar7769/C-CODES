#include<stdio.h>

void namaste();
void bonjour();

int main() {
    printf("enter f for french & i for indian : ");
    char c;
    scanf("%c", &c);

    
    switch (c)
    {
    case 'i':
        namaste();
        break;
    case 'f' : 
         bonjour();
         break;
    default: 
         printf("not valid");
        break;
    }
    
    

    return 0;
}

void namaste() {
    printf(" Namaste\n");
}
void bonjour(){
    printf("Bonjour\n");

}