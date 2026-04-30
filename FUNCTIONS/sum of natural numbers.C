#include<stdio.h>
int nat(int);
int main(){
    int n,natural;
    printf("Enter the Number: \n");
    scanf("%d",&n);
    natural = nat(n);
    printf("sum of natural numbers is = %d",natural);
    return 0;
}
int nat(int a)
{
    if(a==0)
    return 0;
    else if (a==1)
    return 1;
    else
    return a+nat(a-1);
}
