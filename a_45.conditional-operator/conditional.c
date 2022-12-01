#include <stdio.h>
int main()
{
    int nuum1, num2, result;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &nuum1, &num2);
    result = (nuum1 > num2) ? nuum1 : num2;
    printf("Large in %d ", result);
    return 0;
}