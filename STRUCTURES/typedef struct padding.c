#include <stdio.h>
typedef struct student
{
    char name[25];
    int roll;
    float cgpa;
}stu;

int main()
{
    printf("\nsize of struct =%zu ",sizeof(stu));
    return 0;
    
}
