#include<stdio.h>
int main()
{
    int i=1;
    while(i<=50)
    {
        if(i%5==0)
        continue;
        printf("%d  ",i);
        i++;
    }
    return 0;
}
