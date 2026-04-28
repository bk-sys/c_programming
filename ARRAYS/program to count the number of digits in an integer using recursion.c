#include<stdio.h>
int countDigits(int n)
{   int dig=0;
    //base case
    if(n==0)
        return 0;
    else
    dig = 1 + countDigits(n/10); //recursive case
    return dig;
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    //if the number is 0, it has 1 digit
    if(num==0)
        printf("Number of digits: 1\n");
    else
        printf("Number of digits: %d\n",countDigits(num));
    return 0;
}

