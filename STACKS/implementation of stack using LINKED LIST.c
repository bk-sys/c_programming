#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top = NULL;

int isempty()
{
    if(top == NULL)
    return 1;
    else
    return 0;
}
void push(int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    
    if(ptr == NULL)
    {
        printf("Stack Overflow:");
        exit(1);
    }
    
    ptr->data=data;
    ptr->next=top;
    top=ptr;
}

int pop()
{
    struct node *temp = top;
    if(isempty())
    {
        printf("Stack Underflow: ");
        exit(1);
    }
    int value = temp->data;
    top=temp->next;
    free(temp);
    temp = NULL;
    
    return value;
}

void peek()
{
    if(isempty())
    printf("Stack is empty:");
    
    printf("\n%d is Top ",top->data);
}
void display()
{
    struct node *ptr;
    ptr = top;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    
    push(10);
    push(15);
    push(25);
    push(35);
    push(45);
    display();
    printf("\nafter poping:\n");
    pop();
    pop();
    display();
    
    peek();
 
    
    return 0;
}

