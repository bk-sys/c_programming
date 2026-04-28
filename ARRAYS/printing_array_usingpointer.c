#include<stdio.h>
#define max 100
int main()
{
    int a[max],n,i;
    int *ptr=a;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("Array elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(ptr+i));
    }
    return 0;

}
