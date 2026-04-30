#include<stdio.h>
int fib(int);
int main(){
    int n,fibonacci,i;
    printf("Enter the Number: \n");
    scanf("%d",&n);
    fibonacci = fib(n);
    printf("Fibonacci series is =\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",fib(i));
    }
    return 0;
}
int fib(int a)
{
    int f;
    if(a==0)
    return 0;
    else if (a==1)
    return 1;
    else
    return fib(a-1) + fib(a-2);

}
