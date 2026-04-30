#include<stdio.h>
int main()
{
    int pin=1234;
    int n;
    int attempt = 0;
    int limit = 3;
    
    while(attempt<limit)
    {
    printf("Enter your Pin: ");
    scanf("%d",&n);
    
    if(n==pin)
    {
      printf("Access Granted\n");
      break ;
    }
      
    else
    {
        attempt++;
        printf("PIN NOT MATCHED\n:Re-enter the PIN\n  ",limit-attempt);
   
    }

    if(attempt==limit)
    {
        printf("YOUR CARD GOT BLOCKED: ");
    }
}
    return 0;
}
