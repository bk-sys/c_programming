#include <stdio.h>

struct student
{
    char name[25];
    int roll;
    float cgpa;
};
void print(struct student *s1) //struct data type and struct name ans the obejct s1 name is passing
{
    s1-> roll = 65; //using arrow pointers
    s1->cgpa = 78.96;
    printf("%s  ",s1->name);
    printf("%d  ",s1->roll);
    printf("%0.2f   ",s1->cgpa);
}
int main() 
{
   struct student s1 = {"aditya",02,6.9};
   struct student *sptr =&s1; //using pointers bcz we needed the modified data in int main
   print(sptr); //just passing the object name; not the struct name
   printf("%s  ",sptr->name);
   printf("%d  ",sptr->roll);
   printf("%0.2f   ",sptr->cgpa);
   
    return 0;
}
