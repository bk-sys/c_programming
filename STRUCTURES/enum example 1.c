#include <stdio.h>
enum number {a,b=3,c,d,e};

int main()
{
    enum number n1;
    n1=b;
    printf("%d", d); //the values will be sequencely/continuesly after assigning to any one num. in enum

    return 0;
}
