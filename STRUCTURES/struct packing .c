#include<stdio.h>
struct __attribute__((packed)) struct1
{
    char a;
    char ch;
    double b;
};

int main(){
    printf("size: %zu",sizeof(struct struct1));
    return 0;
}
