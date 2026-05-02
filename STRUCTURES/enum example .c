#include <stdio.h>
enum day {SUN, MON, TUE, WED, THU, FRI, SAT};

int main()
{
    enum day today;
    today = WED;
    printf("%d", today); //the o/p will be 3 its can print only values
    return 0;
}
