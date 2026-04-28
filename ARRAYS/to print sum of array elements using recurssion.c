#include <stdio.h>

int print(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return a[n-1] + print(a, n-1);
    }
}

int main()
{
    int sum;
    int array[] = {11, 22, 33, 44, 55};
    int n = sizeof(array) / sizeof(array[0]);
    sum = print(array,n);
    printf("The sum is= %d",sum);
    return 0;
}
