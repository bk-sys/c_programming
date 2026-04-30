#include<stdio.h>
#include<stdarg.h>

void print(int n, ... )
{
    int i ,value,largest = 0;
    va_list args;
    va_start (args,n);
    for(i=0;i<n;i++)
    {
        value=va_arg(args,int);

        if(largest<value)
        {
            largest = value;
        }
        
    }
    printf("%d\n",largest);

    va_end (args);
}
int main()
{
    print(3,10,20,30);
    print(4,12,13,14,15);
    
    return 0;
}
