#include<stdio.h>
int main(){
    int num,rem,originalnum,place=1,modified_number=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    originalnum = num;
    if(num=0)
    {
        num =1;
    }
    else{
    while(num!=0){
        rem=num%10;//extract the digit
        if(rem == 9)
        {
            rem =0;
        }
        else{
             rem=rem+1;//increment the digit by 1
        }
        modified_number=modified_number+rem*place;//reconstruct the number
        place=place*10;//update place value
        num=num/10;//remove the last digit
    }
    }
    printf("Modified number is: %d",modified_number);
}
