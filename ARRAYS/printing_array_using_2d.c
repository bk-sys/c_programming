#include<stdio.h>
#define max 100
int main()
{
    int a[max][max],row,col,i,j;
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
        for(j=0;j<col;j++)
        {
        printf("%d  ", *(*(a+i)+j));
        }
        printf("\n");
    }
    return 0;

}

