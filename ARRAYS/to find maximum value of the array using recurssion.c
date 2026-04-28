#include<stdio.h>
int large (int array[],int n)
{
    int i,max;
    if(n==1)
    return array[0];
    else
    return max = large(array,n-1);

    if(array[n-1]>max)
    return array[n-1];
    else
    return max;
}

int main()
{
    int array[5],max,n=5;
    int i;
    printf("Enter Elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Elements are= ");
    for(i=0;i<5;i++)
    {
        printf("%d  ",array[i]);
    }

    max =large (array,n);
    printf("\nThe maximum value in array is %d",max);
    return 0;
}

