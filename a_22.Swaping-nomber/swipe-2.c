#include <stdio.h>
int main()
{
    int n1 = 5, n2 = 10;
    printf("Num1 = %d\n", n1);
    printf("Num2 = %d\n", n2);
    n1 = n1 - n2;
    n2 = n1 + n2;
    n1 = n2 - n1;
    printf("Num1 = %d\n", n1);
    printf("Num2 = %d", n2);
    return 0;
}