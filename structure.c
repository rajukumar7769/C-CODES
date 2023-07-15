#include<stdio.h>
#include<string.h>

struct student 
{
int roll;
float cgpa;
char name[100];
};

int main(){

    struct student s1 = {211131,9.99,"Raju"};

    printf("student roll = %d \n",s1.roll);

    struct student *ptr = &s1;
    printf("student roll = %f\n", ptr->cgpa);
    // struct student cse[100];
    // cse[0].roll=21131;
    // cse[0].cgpa= 9.99;
    // strcpy(cse[0].name,"Raju");

    // printf("name : %s\n", cse[0].name);
    // printf("roll no : %d \n", cse[0].name);
    // printf("cgpa = %f \n",cse[0].cgpa);

    // // struct student cse2;
    // cse[1].roll=211112;
    // cse[1].cgpa= 9.98;
    // strcpy(cse[1].name,"shubham vats jha");

    // printf("name : %s \n",cse[1].name);
    // printf("roll no : %d \n", cse[1].roll);
    // printf("cgpa = %f \n",cse[1].cgpa);
  
    // // struct student cse3;
    // cse[2].roll=211102;
    // cse[2].cgpa= 9.0;
    // strcpy(cse[2].name,"ranjit");

    // printf("name : %s \n",cse[2].name);
    // printf("roll no : %d \n", cse[2].roll);
    // printf("cgpa = %f \n",cse[2].cgpa);

    return 0;
}
