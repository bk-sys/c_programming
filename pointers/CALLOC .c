#include <stdlib.h>
int main() {
    int i;
int *arr4 = (int*)calloc(5,sizeof(int));
        for(i=0;i<5;i++){
        printf("%d  ",*(arr4+i));
    }
    return 0;
}
