#include<stdio.h>
#define size 10
int main()
{
    int array[size];
    int i;
    printf("Enter array elements: \n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Entered Elements = \n");
    for (i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;

}
