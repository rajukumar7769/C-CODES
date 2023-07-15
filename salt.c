#include<stdio.h>
#include<string.h>
void salting (char password[]);

int main() {
    char passsword[100];
    gets(passsword);
    salting(passsword);

}

void salting(char password[]) {
    char salt[] = "123";
    char newpass [200];

    strcpy(newpass,password); //newpass = "test"
    strcat(newpass,salt); //newpass = "test" + "123";
    puts(newpass);
}