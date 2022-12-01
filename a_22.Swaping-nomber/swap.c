#include <stdio.h>
int main()
{
    int number01 = 100, number02 = 200, temp;
    printf("Num1 = %d\n", number01);
    printf("Num2 = %d\n", number02);
    temp = number01;
    number01 = number02;
    number02 = temp;
    printf("Num1 = %d\n", number01);
    printf("Num2 = %d", number02);
    return 0;
}