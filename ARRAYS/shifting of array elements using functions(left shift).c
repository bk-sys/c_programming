#include<stdio.h>
#define max 10
int shifty(int array[],int shift,int n)
{
    int i,j,k,temp;
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
}
int main()
{
    int array[max];
    int n,i,j,k,shift,temp,new;
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
    
    new = shifty(array,shift,n);
    
    
    return 0;

}
#include<stdio.h>
#define SIZE 100
int shiftarr(int array[],int n){
    for(int j=n;j>0;j--)
       {
           array[j] = array[j-1];
       }
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
       array[i]= temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",array[i]);
    return 0;
}
