#include<stdio.h>
int main()
{
    int a = 20;
    int b = 50;
    int *p = &a;
    int *q = &b;

    if(*p>*q)
    {
        printf("Largest Number is %d", *p);
    }
    else
    printf("Largest number is %d ",*q);
    return 0;
}
