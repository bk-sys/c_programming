#include<stdio.h>
int main ()
{
    int x = 10; 
    int y = 20;
    int temp;
    
    int *p1=&x;
    int *p2 = &y;
    int **p3 = &p1;
    int **p4 = &p2;
     printf("Before swapping: x= %d , y= %d  \n", x,y);
    temp = **p3;
    **p3 = **p4;
    **p4 = temp;
    printf("After swapping:  x = %d, y = %d\n", x, y);
    return 0;    
    
}
