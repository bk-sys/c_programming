#include<stdio.h>
int print(int a[],int n,int index)
{
    if(index==n)
    {
        return 0;
    }
    else
    {
        printf("%d  ",a[index]);
        return print(a,n,index+1);
    }
}
int main ()
{
    int array[]={11,22,33,44,55};
    int n = sizeof(array)/sizeof(array[0]);
    print(array,n,0);    
    return 0;
}
