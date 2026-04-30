#include<stdio.h>
int main()
{
    int degree=0,num,output=0,rem,input,deg,mul=1;
    printf("Enter the Number: ");
    scanf("%d",&input);
    num = input;
    while(num>0)
    {
        rem = num%10;
        degree++;
        num = num/10;
    }
    num = input;
    while(num>0)
    {
        deg = degree;
        rem = num%10;
        while(deg>0)
        {
            mul = mul*rem;
            deg--;
        }
        output=output+mul;
        num=num/10;
        mul=1;
    }
    if(output==input)
    {
        printf("The Number is ARMSTRONG Number");
    }
    else{
        printf("The Number is NOT a ARMSTRONG Number");
    }
    return 0;

}
