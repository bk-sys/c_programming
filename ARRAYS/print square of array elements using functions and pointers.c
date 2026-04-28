#include<stdio.h>
#define max 100
void square(int *a,int n)
{
    int square,i;
    for (i=0;i<n;i++)
    {
        //*(a+i) = (*(a+i))*(*(a+i));
        a[i] = a[i]*a[i];
    }
}
int main()
{
    int arr[max],i,n;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter Array Elements: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    square(arr,n);
    printf("array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }

    return 0;

}
