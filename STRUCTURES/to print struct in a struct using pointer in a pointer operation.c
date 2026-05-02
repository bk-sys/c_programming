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
    struct bdy *dob;
};
int main()
{
    struct student s2 ;
    struct student *sptr1 = &s2;
    
    struct bdy d1;
    sptr1->dob =&d1;
    
    strcpy(sptr1->name,"aditya");
    sptr1->roll = 23;
    sptr1->cgpa = 6.95;
    sptr1->dob->date = 02;
    sptr1->dob->month = 07;
    sptr1->dob->year = 2004;
    
    printf("\nName =%s\n",sptr1->name);
    printf("Roll =%d\n",sptr1->roll);
    printf("cgpa =%0.2f\n",sptr1->cgpa);
    printf("DOB = %d-%d-%d",sptr1->dob->date,sptr1->dob->month,sptr1->dob->year);
    return 0;
}

