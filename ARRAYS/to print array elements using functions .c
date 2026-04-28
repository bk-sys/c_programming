#include<stdio.h>
void print(int a,int b)
{
    printf("%d\n",a);
    printf("%d\n",b);
}
int main ()
{
    int array[5]={11,22,33,44,55};
    print(array[2], array[4]);
    return 0;
}
