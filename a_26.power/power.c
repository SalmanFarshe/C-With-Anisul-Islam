#include <stdio.h>
#include <math.h>
int main (){
    double x, y, result;
    printf("Enter x , y = ");
    scanf("%lf %lf", &x, &y);
    result = pow(x, y);
    printf("%lf", result);
    return 0;
}