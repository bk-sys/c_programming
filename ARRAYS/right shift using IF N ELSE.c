#include<stdio.h>
#define SIZE 100
int shiftarr(int array[],int n){
    //for(int j=n;j>0;j--)
    if(n==0)
    return 0;
       
    array[n] = array[n-1];      
    shiftarr(array,n-1);
}
    
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
    shift = shift % n;
    for(i=0;i<shift;i++)
    {
       int temp = array[n-1];
       shiftarr(array,n);
       array[0]= temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",array[i]);
    return 0;
}
