#include<stdio.h>
#pragma pack(1)
struct stu
{
    char a;
    char ch;
    double b;
};

int main(){
    printf("size: %zu",sizeof(struct stu));
    return 0;
}