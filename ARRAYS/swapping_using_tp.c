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
    int ***tp1 = &p3;
    int ***tp2 = &p4;
     printf("Before swapping: x= %d , y= %d  \n", x,y);
    temp = ***tp1;
    ***tp1 = ***tp2;
    ***tp2 = temp;
    printf("After swapping:  x = %d, y = %d\n", x, y);
    return 0;    
    
}

