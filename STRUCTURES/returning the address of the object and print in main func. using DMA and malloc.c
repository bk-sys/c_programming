#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char name[25];
    int roll;
    float cgpa;
};
struct student* print()
{
    struct student *ptr;
    ptr = (struct student*)malloc(sizeof(struct student));
    strcpy(ptr->name,"amrut");
    ptr->roll = 23;
    ptr->cgpa = 6.98;
    
    return ptr;
}
int main() 
{
   struct student *sptr = print();
   
   printf("name:%s  \n",sptr->name);
   printf("roll:%d  \n",sptr->roll);
   printf("cgpa:%0.2f \n ",sptr->cgpa);
   
   return 0;
}
