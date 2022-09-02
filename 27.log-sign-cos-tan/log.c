#include <stdio.h>
#include <math.h>
int main(){
    // log
    double x, logValue;
    printf("Enter the value of x :");
    scanf("%lf", &x);
    logValue = log(x);
    printf("the value of log(x) = %lf\n", logValue);
    
    // log 10 
    double y, log10Value;
    printf("Enter the value of y :");
    scanf("%lf", &y);
    log10Value = log10(y);
    printf("the value of log(10) = %lf\n", log10Value);

    // exp()
    double z, expValue;
    printf("Enter the value of z :");
    scanf("%lf", &z);
    expValue = exp(z);
    printf("the value of exp(z) = %lf\n", expValue);
    return 0;
}