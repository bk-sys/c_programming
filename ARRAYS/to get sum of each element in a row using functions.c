#include<stdio.h>
void print(int a[],int n,int sum)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
        sum=sum+a[i];
    }
    printf("\nThe sum is= %d",sum);
}
int main ()
{
    int array[5]={11,22,33,44,55};
    int n=5,sum=0;
    print(array, n,sum);
    return 0;
}

