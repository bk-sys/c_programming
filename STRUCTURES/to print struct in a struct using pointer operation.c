#include <stdio.h>
#include<string.h>
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
    struct student s1 ;
    struct student *sptr=&s1;
    strcpy(sptr->name,"aditya");
    sptr->roll = 23;
    sptr->cgpa = 6.95;
    sptr->dob.date = 02;
    sptr->dob.month = 07;
    sptr->dob.year = 2004;

    printf("Name =%s\n",sptr->name);
    printf("Roll =%d\n",sptr->roll);
    printf("cgpa =%0.2f\n",sptr->cgpa);
    printf("DOB = %d-%d-%d",sptr->dob.date,sptr->dob.month,sptr->dob.year);

//using the single line data initalisation in a pointer 
    struct student s2 ;
    struct student *sptr1=&s2;
    *sptr1 = (struct student){"Amrut",14,9.6,{23,11,2004}};

    printf("\nName =%s\n",sptr1->name);
    printf("Roll =%d\n",sptr1->roll);
    printf("cgpa =%0.2f\n",sptr1->cgpa);
    printf("DOB = %d-%d-%d",sptr1->dob.date,sptr1->dob.month,sptr1->dob.year);
    return 0;
}

