#include<stdio.h>
#define max 100
int main()
{
    int a[max][max],row,col,i,j,maximum;
    printf("Enter size of an array: ");
    scanf("%d%d",&row,&col);
    printf("Enter elements: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        scanf("%d", *(a+i)+j);
        }
    }
    printf("Array elements: \n");
    for(i=0;i<row;i++)
    {
        j=0;
        maximum = *(*(a+i)+j);
        for(j=0;j<col;j++)
        {
           if(*(*(a+i)+j)>maximum)
           maximum = *(*(a+i)+j);
        }
        printf("the maximum element in row %d is: %d \n",i,maximum);
    }
    return 0;

}
