// write a programme which can devide two number
#include<stdio.h>
int main(){
    float FstNmbr, ScndNmbr, Result;
    printf("Enter First Number : ");
    scanf("%f", &FstNmbr);
    printf("Enter Second Number : ");
    scanf("%f", &ScndNmbr);
    Result = FstNmbr / ScndNmbr; // devide of the two nomber
    printf("The Total Amount is = %.2f", Result);
    return 0;
}