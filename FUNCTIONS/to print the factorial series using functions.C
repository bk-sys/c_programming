#include<stdio.h>
int fact(int);
int main(){
    int n,factorail;
    printf("Enter the Number: \n");
    scanf("%d",&n);
    factorail = fact(n);
    printf("Factorial of the number is = %d",factorail);
    return 0;
}
int fact(int a)
{
    if(a==0)
    return 1;
    else if (a==1)
    return 1;
    else
    return a*fact(a-1);
}

