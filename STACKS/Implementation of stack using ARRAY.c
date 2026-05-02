#include <stdio.h>
#define max 5

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
    printf("Stack overflow: \n");
    
    top++; // or top = top+1;
    stack[top] = data;
    printf("%d pushed into stack\n", data);
}

int pop()
{
    int value;
    if(isempty())
    printf("Stack underflow: \n");
    
    value = stack[top];
    top--; // or top = top-1;
    return value;
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n", stack[top]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(int i=top; i>=0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main() 
{
    int data;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    
    display();
    peek();
    data = pop();
    display();
    peek();
    data = pop();
    display();
    peek();
    return 0;
}


