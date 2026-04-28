#include<stdio.h>
int main()
{
    int a = 10;
    float f= 3.14;
    char character = 'A';
    int *p,*q;
    p=&a;
    q=p;
    float *r = &f;
    char *ch= &character;
    printf("Address of Integer pointer = %p\t%p\n",p,q);
    printf("Value of Integer pointer = %d\t%d\n",*p,*q);
    printf("Address of float pointer = %p\n",r);
    printf("float value = %0.2f \n",*r);
    printf("Address of character pointer = %p\n",ch);
    printf("charctervalue = %c \n",*ch);
    return 0;
}

