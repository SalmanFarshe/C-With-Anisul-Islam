#include <stdio.h>
int main()
{
    float height, base, area;
    printf("Enter base : ");
    scanf("%f", &base);
    printf("Enter Height : ");
    scanf("%f", &height);
    area = (1 / (float)2) * height * base;
    printf("The area is %.2f", area);
    return 0;
}