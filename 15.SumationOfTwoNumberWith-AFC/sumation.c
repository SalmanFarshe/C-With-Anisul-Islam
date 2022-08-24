#include<stdio.h>
int main(){
    float Num01, Num02, Sum;
    printf("Please Enter Two Nomber : ");
    scanf("%f %f", &Num01, &Num02);
    Sum = Num01 + Num02;
    printf("The sumation of your given two number is : %.2f", Sum);
    return 0;
}