#include<stdio.h>
#include<stdlib.h>
#define max 20

int top = -1;
int stack[max];

int isfull()
{
    if(top == max-1)
    return 1;
    else
    return 0;
}
int isempty()
{
    if(top == -1)
    return 1;
    else
    return 0;
}
void push(int data)
{
    if(isfull())
    {
        printf("The stack is full: \n");
    }
    else
    {
        top++;
        stack[top]=data;
    }
}
int pop()
{
    int value;
    if(isempty())
    {
        printf("stack underflow:");
        exit(1);
    }
    else
    {
        value = stack[top];
        top--;
        return value;
    }
}
int main()
{
    int decimal,binary;
    printf("Enter the value to convert:");
    scanf("%d",&decimal);
    int rem;
    
    while(decimal != 0)
    {
        rem = decimal % 2; //to get reminder
        push(rem);
        decimal = decimal / 2; //to get queient
    }
    printf("The binary number is: ");
    while(!isempty())
    {
        printf("%d", pop());
    }
    
    return 0;
}
