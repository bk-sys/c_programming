#include <stdio.h>

struct student
{
    char name[25];
    int roll;
    float cgpa;
};
void print(struct student s1)//struct data type and struct name ans the obejct s1 name is passing
{
    printf("%s  ",s1.name);
    printf("%d  ",s1.roll);
    printf("%0.2f   ",s1.cgpa);
}
int main() 
{
   struct student s1 = {"aditya",02,6.9};
   print(s1); //just passing the object name; not the struct name
return 0;
}

