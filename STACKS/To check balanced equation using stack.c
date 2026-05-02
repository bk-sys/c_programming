#include<stdio.h>
#include<stdlib.h>

#define max 20

int top = -1;
int stack[max];

int isfull()  { return top == max-1; }
int isempty() { return top == -1; }

void push(int data)
{
    if(isfull())
        printf("The stack is full\n");
    else
        stack[++top] = data;
}

int pop()
{
    if(isempty()) { printf("Stack underflow\n"); exit(1); }
    return stack[top--];
}
int match_balance(char open, char close)
{
    if(open == '(' && close == ')')  
        return 1;
    else if(open == '{' && close == '}')
        return 1;
    else if(open == '[' && close == ']')
        return 1;
    else
        return 0;
}

int check_exp(char *ptr)
{
    int i =0;
    char data;
    for(i=0; ptr[i] != '\0'; i++)
    {
        if(ptr[i] == '(' || ptr[i] == '{' || ptr[i] == '[')
            push(ptr[i]);
        else if(ptr[i] == ')' || ptr[i] == '}' || ptr[i] == ']')
        {
            if(isempty()){
                printf("Right parenthesis is more than left parenthesis\n");
                return 0;
            }
            data = pop();
            if(!match_balance(data, ptr[i])){
                printf("Mismatched parentheses\n");
                return 0;
            }
        }
    }
    if(isempty()){
        printf("Expression is balanced\n");
        return 1;
    }
    else{
        printf("Left parenthesis is more than right parenthesis\n");
        return 0;
    }
}

int main(){
    char exp[100];
    int balance;

    printf("Enter your expression:");
    fgets(exp,sizeof(exp),stdin);

    balance = check_exp(exp);

    if(balance == 1)
        printf("Exp is balanced");
    else
        printf("Exp not balanced");

    return 0;
}
    
    return 0;
}
