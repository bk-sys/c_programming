#include <stdio.h>
struct number
{
    int a;
    int b;
    int c;
};
int main() 
{
    struct number calci;
    int choice,result;
    printf("Enter the choice: \n");
    printf("EXIT=0\nADD=1\nSUB=2\nMUL=3\nDIV=4\n");
    scanf("%d",&choice);
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&calci.a,&calci.b,&calci.c);
    switch(choice)
    {
        case 0:printf("EXIT \n");break;
        case 1:result = calci.a+calci.b+calci.c;
        printf("RESULT = %d  ",result);break;
        case 2:result = calci.a-calci.b-calci.c;
        printf("RESULT = %d  ",result);break;
        case 3:result = calci.a*calci.b*calci.c;
        printf("RESULT = %d  ",result);break;
        case 4:if(calci.b == 0||calci.c==0)
                printf("Devide by zero ERROR: \n");
                else
                result = ((calci.a/calci.b)/calci.c);
                printf("RESULT = %d  ",result);break;
        default: printf("INVALID CHOICE:\n");
    }
    return 0;
}

