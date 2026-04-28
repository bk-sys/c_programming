#include<stdio.h>
int add(int, int); // declaration of the function

int main()
{
    int x,y,sum;
    printf("Enter two values: ");
    scanf("%d %d",&x,&y);

    sum=add(x,y);
    printf("Sum = %d",sum);
    return 0;
    
}
int add(int a,int b)   // defination of the function
{
    int sum;
    sum=a+b;
    return sum;
}
