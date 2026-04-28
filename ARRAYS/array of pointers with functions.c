#include<stdio.h>
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}

int main ()
{
    int x,y;
    int result,choice;
    printf("Enter the numbers: ");
    scanf("%d %d",&x,&y);
    printf("Enter the choice: \n");
     printf("Add - 0\nSubtarct - 1\nMultiply - 2\nDivision-3\n");
    scanf("%d",&choice);

    int (*ptr[4])(int,int) = {add,sub,mul,div};
   
    printf("Result = %d",(*ptr[choice])(x,y));
    return 0;

}
