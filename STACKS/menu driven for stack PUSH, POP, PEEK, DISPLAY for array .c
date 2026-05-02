#include <stdio.h>
#define MAX 5

int top = -1;
int stack[MAX];

// PUSH
void push()
{
    int value;
    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter value to push: ");
    scanf("%d",&value);
    top++;
    stack[top] = value;
    printf("%d pushed into stack\n",value);
}

// POP
void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d popped from stack\n",stack[top]);
    top--;
}

// PEEK
void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n",stack[top]);
    }
}

// DISPLAY
void display()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");
    for(int i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
}

int main()
{
    int choice;
   
    printf("1-Push\n");
    printf("2-pop\n");
    printf("3-peek\n");
    printf("4-display\n");
    printf("5-Exit\n");
       
    do{
    printf("Enter your choice: \n");
    scanf("%d",&choice);
    
      switch(choice)
      {
        case 1:push();break;
        case 2:pop();break;
        case 3:peek();break;
        case 4:display();break;
        case 5:printf("Exiting....");break;
        default:printf("Invalid choice: ");
        
      }
    }while(choice != 5);
    
    return 0;
}
