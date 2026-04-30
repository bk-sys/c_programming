#include<stdio.h>
int swap(int* ,int*);

int main()
{
    int x=10;
    int y =20;
    printf("x= %d  y= %d : Before swapping\n",x,y);
    swap (&x ,&y);
    printf("x= %d  y= %d : After swapping ",x,y);
    return 0;
}
int swap(int*x,int*y)
{
    *x=20;
    *y=10;
}

