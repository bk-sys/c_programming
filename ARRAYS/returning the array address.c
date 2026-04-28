#include<stdio.h>
#define max 100
int* func(int x,int arr[])
{
    arr[0]=x*x;
    arr[1]=x*x*x;
    arr[2]=x*x*x*x;
    return arr;
}
int main()
{
    int arr[3],i,v;
    printf("Enter the value :");
    scanf("%d",&v);
    int *ptr=func(v,arr);
    printf("square of the value = %d\n",arr[0]);
    printf("cube of the value = %d\n",arr[1]);
    printf("quadric of the value = %d",arr[2]);
    return 0;

}
