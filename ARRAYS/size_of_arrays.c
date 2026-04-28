#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5};
    int i=0,length;
    length = sizeof(array)/sizeof(array[0]);
    printf("Length of an array is %zu\n",length);
    while(i<=4)
    {
        printf("%d  ",array[i]);
        i++;

    }
    return 0;
}
