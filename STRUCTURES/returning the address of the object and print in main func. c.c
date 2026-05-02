#include <stdio.h>
struct student
{
    char name[25];
    int roll;
    float cgpa;
};
struct student* print()
{
    static struct student s = {"amrut",14,6.95};
    return &s;
}
int main() 
{
   struct student *sptr = print();
   
   printf("name:%s  \n",sptr->name);
   printf("roll:%d  \n",sptr->roll);
   printf("cgpa:%0.2f \n ",sptr->cgpa);
   
   return 0;
}

