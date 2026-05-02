#include <stdio.h>
#include<string.h>
struct student
{
    char name[25];
    int roll;
    float cgpa;
};
struct student print(struct student s)
{
//we can assign the values in a single line so that we don’t have to use the strcpy func 

    strcpy(s.name,"amrut");
    s.roll=14;
    s.cgpa=9.9;
    return s;
}
int main() 
{
   struct student s1 = {"aditya",02,6.9};
   printf("Before returning value:\n");
   printf("name:%s  \n",s1.name);
   printf("roll:%d  \n",s1.roll);
   printf("cgpa:%0.2f   \n",s1.cgpa);
   printf("After returning value:\n");  
   struct student s2= print(s1); 
   printf("name:%s  \n",s2.name);
   printf("roll:%d  \n",s2.roll);
   printf("cgpa:%0.2f \n ",s2.cgpa);
return 0;
}
