#include <stdio.h>
struct student
{
    char name[25];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1[3];
    int i,N;
    printf("Enter the number of students:");
    scanf("%d",&N);
    printf("-------------------------------\n");
    
    for(i=0;i<N;i++)
    {
    printf("Enter the details of student %d\n",i+1);
    printf("Enter name:");
    scanf("%s",&s1[i].name); //we can use %[^\n]s  to get the data till next line and it reads space also.
    printf("Enter roll:");
    scanf("%d",&s1[i].roll);
    printf("Enter cgpa:");
    scanf("%f",&s1[i].cgpa);
    }
    for(i=0;i<N;i++)
    {
    printf("Name = %s\n",s1[i].name);
    printf("Roll = %d\n",s1[i].roll);
    printf("CGPA = %0.2f\n",s1[i].cgpa);
    printf("-----------------------------\n");
    }
    return 0;
}

