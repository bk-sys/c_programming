#include <stdio.h>
#include<string.h>

struct student
{
    char name[25];
    int roll;
    float cgpa;
};

int main()
{
    struct student s4 = {"sudeep",505,7.687};
    struct student *sptr;
    sptr = &s4;
    printf("Name = %s\n",sptr->name);
    printf("Roll = %d\n",sptr->roll);
    printf("CGPA = %0.2f\n",sptr->cgpa);

    return 0;
}
