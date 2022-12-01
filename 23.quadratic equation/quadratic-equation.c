#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, x1, x2, base;
    printf("Enter The Value Of a = ");
    scanf("%f", &a);
    printf("Enter The Value Of b = ");
    scanf("%f", &b);
    printf("Enter The Value Of c = ");
    scanf("%f", &c);
    base = sqrt((b * b) - (4 * a * c));
    x1 = (-b + base) / (2 * a);
    x2 = (-b - base) / (2 * a);
    printf("x1 is = %.6f and x2 = %.6f", x1, x2);
}