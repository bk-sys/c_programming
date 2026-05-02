#include <stdio.h>
struct student
{
    char name[30];
    int roll;
    int marks[5];
    int total;
    float avg;
    char grade;
};
char findgrade(float avg)
{
    if(avg>=90) return 'A';
    else if(avg>=80) return 'B';
    else if(avg>=70) return 'C';
    else if(avg>=60) return 'D';
    else if(avg>=50) return 'E';
    else return 'F';
}
int main() 
{
    int i,j,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Details of student %d :\n",i+1);
        printf("Enter the name of student: \n");
        scanf("%s",s[i].name);
        printf("Enter the roll number: \n");
        scanf("%d",&s[i].roll);
        printf("Enter the marks of 5 subjects: \n");
        int sum=0;
        for(j=0;j<5;j++)
        {
            scanf("%d",&s[i].marks[j]);
            sum=sum+s[i].marks[j];
        }
        s[i].total=sum;
        printf("Toatl marks are: %d\n",sum);
        s[i].avg=sum/5;
        s[i].grade = findgrade(s[i].avg);
    }
    printf("===========STUDENTS DATA=======\n");
    for(i=0;i<n;i++)
    {
       printf("Name: %s  ",s[i].name);
       printf("Total: %d  ",s[i].total);
       printf("AVG: %0.2f  ",s[i].avg);
       printf("Grade: %c   ",s[i].grade);
       printf("\n"); 
    }
    return 0;
}
