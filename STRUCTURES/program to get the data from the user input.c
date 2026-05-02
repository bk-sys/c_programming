#include <stdio.h>
struct student
{
    char name[25];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    printf("Enter name:");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("Enter roll:");
    scanf("%d",&s1.roll);
    printf("Enter cgpa:");
    scanf("%f",&s1.cgpa);
    
    printf("Name = %s",s1.name);
    printf("Roll = %d\n",s1.roll);
    printf("CGPA = %0.2f",s1.cgpa);
    return 0;
}
