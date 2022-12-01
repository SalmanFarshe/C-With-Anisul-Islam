#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, s, area;
    printf("Enter The value of a = ");
    scanf("%f", &a);
    printf("Enter The value of b = ");
    scanf("%f", &b);
    printf("Enter The value of c = ");
    scanf("%f", &c);
    s = (a + b + c) / (float)2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is = %f", area);
    return 0;
}