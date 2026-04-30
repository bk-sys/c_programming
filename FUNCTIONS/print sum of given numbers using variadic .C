#include<stdio.h>
#include<stdarg.h>

void sum(int n, ... )
{
    int i ,add,sum=0;
    va_list args;
    va_start (args,n);
    for(i=0;i<n;i++)
    {
        add=va_arg(args,int);
        sum = sum+add;
    }
    printf("Sum of numbers is %d\n",sum);
    va_end (args);
}
int main()
{
    sum(3,100,200,300);
    sum(4,121,183,154,115);
    
    return 0;
}
