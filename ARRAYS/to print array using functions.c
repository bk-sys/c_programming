#include<stdio.h>
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
int main ()
{
    int array[5]={11,22,33,44,55};
    int n=5;
    print(array, n);
    return 0;
}
