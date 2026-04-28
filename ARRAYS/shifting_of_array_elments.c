//shifting of array elements(leftside)
#include<stdio.h>
#define max 10
int main()
{
    int array[max];
    int n,i,j,k,shift,temp;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("ARRAY elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",array[i]);
    }
    printf("\nEnter no. of shifts: ");
    scanf("%d",&shift);

   
    for(j=1;j<=shift;j++)
    {
         temp = array[0];
        for(k=0;k<n-1;k++)
        {
            array[k]=array[k+1];
        }
        array[n-1]=temp;
    }
    
    printf("After shifting: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",array[i]);
    }
    return 0;

}
