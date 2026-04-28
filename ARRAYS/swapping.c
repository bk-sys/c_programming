#include<stdio.h>
int main()
{
    int a,b,c,temp;
    a=10;
    b=20;
    c=30;
    int *p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    printf("Before swapping numbers are: %d  %d  %d  \n",*p,*q,*r);
    temp=*r;
    c=*q;
    b=*p;
    a=temp;    
    printf("After swapping numbers are: %d  %d  %d  ",c,a,b);
    return 0;
}
