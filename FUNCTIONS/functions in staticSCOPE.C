#include<stdio.h>
int func1(int);
int func2(int);
int a =10;  // GLOBAL VARIABLE
int main()
{
    int a =10;
    a=func1(a); // a=10
    printf("%d",a);
    return 0;
}
int func1(int b)
{
    b=b+10;
    b=func2(b);//b =b+10  :  b=a : (a=10)
    return b;
}
int func2(int b)
{
    int c;
    c=a+b;  // Its check a in its block: not there means take the value of global variable
    return c;
}
