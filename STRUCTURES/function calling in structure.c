#include <stdio.h>

struct student
{
    char name[25];
    int roll;
    float cgpa;
};

void print(char name[],int roll,float cgpa)
{
    printf("%s  ",name);
    printf("%d  ",roll);
    printf("%0.2f   ",cgpa);
}

int main() 
{
   struct student s1 = {"aditya",02,6.9};
   print(s1.name,s1.roll,s1.cgpa);
return 0;
}
