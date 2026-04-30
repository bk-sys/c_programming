#include <stdio.h>
#include <stdlib.h>
int* create()
{
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;
    free(ptr);
    return ptr;
}
int main() {
    int *dptr=create();
    printf("%d ",*dptr);
    return 0;
}
