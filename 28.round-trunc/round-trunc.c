#include <stdio.h>
#include <math.h>
int main(){
    float x, rslt;
    printf("Enter a Floating point number for round : ");
    scanf("%f", &x);
    rslt = round(x);
    printf("The Rounded value is %.2f\n", rslt);
    
    float y, rslty;
    printf("Enter a Floating point number for round : ");
    scanf("%f", &y);
    rslty = trunc(y);
    printf("The Rounded value is %.2f\n", rslty);
    return 0;
}