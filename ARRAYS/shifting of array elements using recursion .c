#include<stdio.h>
#define SIZE 100
    int main(){
    int array[SIZE];
    int i = 0,n,shift;
     printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter number of shifts : ");
    scanf("%d",&shift);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
    }
    printf("Entered elements :\n");
    for(i=0;i<shift;i++)
    {
       int temp = array[n-1];
       for(int j=n;j>0;j--)
       {
           array[j] = array[j-1];
       }
       array[i]= temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",array[i]);
    return 0;
}

