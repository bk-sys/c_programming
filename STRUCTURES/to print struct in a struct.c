#include <stdio.h>
struct bdy
{
    int date;
    int month;
    int year;
};
struct student
{
    char name[25];
    int roll;
    float cgpa;
    struct bdy dob;
};
int main()
{
    struct student s1 = {"aditya",18,9.65,{02,07,2004}};
    printf("Name =%s\n",s1.name);
    printf("Roll =%d\n",s1.roll);
    printf("cgpa =%0.2f\n",s1.cgpa);
    printf("DOB = %d-%d-%d",s1.dob.date,s1.dob.month,s1.dob.year);

    return 0;
}

