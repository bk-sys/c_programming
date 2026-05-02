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
    struct student s1;
    strcpy(s1.name,"aditya");
    s1.roll = 002;
    s1.cgpa = 6.65;

    printf("Name = %s\n",s1.name);
    printf("Roll = %d\n",s1.roll);
    printf("CGPA = %0.2f\n",s1.cgpa);

    
// or we can assign in a single line

struct student s2 = {"anurag",805,7.65};
    printf("Name = %s\n",s2.name);
    printf("Roll = %d\n",s2.roll);
    printf("CGPA = %0.2f\n",s2.cgpa);

// or we can assign in a single line (another method) we did not use to follow the order

struct student s3 = {.roll=805,.name="amrut",.cgpa=7.65};
    printf("Name = %s\n",s3.name);
    printf("Roll = %d\n",s3.roll);
    printf("CGPA = %0.2f\n",s3.cgpa);

    return 0;
} 
