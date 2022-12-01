#include <stdio.h>
#include <math.h>
int main()
{
    float r, area, PI = 3.1416;
    printf("Enter radius: ");
    scanf("%f", &r);
        area =  PI * r * r;
    printf("Enter radius: %f", area);
    return 0;
}