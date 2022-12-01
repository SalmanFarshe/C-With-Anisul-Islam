#include <stdio.h>
#include <math.h>
int main()
{
    int absoluteValue, result;
    printf("Enter a Nomber to see the absolute value : ");
    scanf("%d", &absoluteValue);
    result = abs(absoluteValue);
    printf("The absolute value of the given nomber is : %d", result);
    return 0;
}