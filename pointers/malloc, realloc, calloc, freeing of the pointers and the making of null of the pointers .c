#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int *arr=(int*)malloc(5*sizeof(int));
    
    if(arr==NULL)
    {
        printf("memory not allocated");
        return 0;
    }
    for(i=0;i<5;i++){
        *(arr+i) = i+1;
        printf("%d  ",*(arr+i));
    }
    printf("\n");
    
    int *arr1 = (int*)realloc(arr,10*sizeof(int));
    if(arr1==NULL)
    {
        printf("memory not allocated");
        return 0;
    }
        for(i=0;i<10;i++){
        *(arr1+i) = i+1;
        printf("%d  ",*(arr1+i));
    }
    printf("\n");
    
    int *arr2 = (int*)realloc(arr1,10*sizeof(int));
     if(arr2==NULL)
    {
        printf("memory not allocated");
        return 0;
    }
        for(i=0;i<3;i++){
        *(arr2+i) = i+1;
        printf("%d  ",*(arr2+i));
    }
    printf("\n");
    
    int *arr4 = (int*)calloc(5,sizeof(int));
     if(arr4==NULL)
    {
        printf("memory not allocated");
        return 0;
    }
        for(i=0;i<5;i++){
            *(arr4+i)= i+1;
        printf("%d  ",*(arr4+i));
    }
    free(arr);
    free(arr1);
    free(arr2);
    free(arr4);
    
    arr = arr1 = arr2 = arr4 = NULL;
    return 0;
}

