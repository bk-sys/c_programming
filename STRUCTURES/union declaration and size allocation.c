#include<stdio.h>

union student
{
    char a;
    int b;
    double c; //the size of this union will become 8 bcz in this data types the highest is double
};

int main(){
    printf("size: %zu",sizeof(union student));
    return 0;
}
