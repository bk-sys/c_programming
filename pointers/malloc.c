#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int *arr=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("%d  ",arr[i]);
    }
    
    return 0;
}
