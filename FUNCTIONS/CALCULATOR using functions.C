#include<stdio.h>
int add(int,int);
int sub(int ,int);
int mul(int, int);
int div(int,int);

int main()
{
    int x,y,sum,subtraction,product,divison;
    printf("Enter two Numhers: ");
    scanf("%d %d",&x,&y);

    sum=add(x,y);
    subtraction=sub(x,y);
    product=mul(x,y);
    divison=div(x,y);
    
    printf("Sum = %d\n", sum);
    printf("Subtraction = %d\n", subtraction);
    printf("Product = %d\n", product);
    printf("Divison = %d\n", divison);
    return 0;

}
int add (int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}
int sub (int x,int y)
{
    int subtraction;
    subtraction=x-y;
    return subtraction;
}
int mul (int x,int y)
{
    int product;
    product=x*y;
    return product;
}
int div (int x,int y)
{
    int divison;
    divison=x/y;
    return divison;
}

