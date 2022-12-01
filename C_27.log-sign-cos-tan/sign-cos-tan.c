#include <stdio.h>
#include <math.h>
int main(){
    // sin()
    float a, sinValue;
    printf("Enter the value of a for sin:");
    scanf("%f", &a);
    sinValue = sin(a);
    printf("the value of sin(a) = %f\n", sinValue);

    // cos()
    float b, cosValue;
    printf("Enter the value of b for cos:");
    scanf("%f", &b);
    cosValue = cos(b);
    printf("the value of cos(b) = %f\n", cosValue);

    // tan()
    float c, tanValue;
    printf("Enter the value of c for tan:");
    scanf("%f", &c);
    tanValue = tan(c);
    printf("the value of tan(c) = %f\n", tanValue);

    // cot()
    float d, cotValue;
    printf("Enter the value of d for cot:");
    scanf("%f", &d);
    cotValue = (1 / tan(d));
    printf("the value of cot(d) = %f\n", cotValue);

    // sec()
    float e, secValue;
    printf("Enter the value of e for sec:");
    scanf("%f", &e);
    secValue = (1 / cos(e));
    printf("the value of sec(e) = %f\n", secValue);

    // cosec()
    float f, cosecValue;
    printf("Enter the value of f for cosec:");
    scanf("%f", &f);
    cosecValue = (1 / sin(f));
    printf("the value of cosec(f) = %f\n", cosecValue);
    return 0;
}