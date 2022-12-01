#include <stdio.h>
int main()
{
    float a, b, c, sum, avg;
    printf("Enter First Value :");
    scanf("%f", &a);
    printf("Enter Second Value :");
    scanf("%f", &b);
    printf("Enter Third Value :");
    scanf("%f", &c);
    sum = a + b + c;
    avg = sum/3;
    printf("The sumation is %.2f and the avarage is %.2f", sum, avg);
    return 0;
}