#include<stdio.h>
int grade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}
int avg(int a,int b,int c,int d){
    return (a+b+c+d)/4;
}
int total(int a,int b,int c,int d){
    return a+b+c+d;
}
int main(){
    int a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("Grade: %c\n", grade(avg(a,b,c,d)));
    printf("Average: %d\n", avg(a,b,c,d));
    printf("Total: %d\n", total(a,b,c,d));
}
