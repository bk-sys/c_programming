#include<stdio.h>
#define max 50
int main()
{
    int array[max][max];
    int i,j,row,col;
    printf("Enter size of an array: ");
    scanf("%d%d",&row,&col);

    printf("Enter the elements :");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
      printf(" 2D array is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",array[i][j]);
        }
      printf("\n");
    } 
    return 0;
}
