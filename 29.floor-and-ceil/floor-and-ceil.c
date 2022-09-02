#include <stdio.h>
#include <math.h>
int main() {
    float x, result;
    printf("Enter a Floating point number for floor : ");
    scanf("%f", &x);
    result = floor(x);
    printf("The floored value is %.2f\n", result);
    
    //    ceilling
    float y, resulty;
    printf("Enter a Floating point number for ceil : ");
    scanf("%f", &y);
    resulty = ceil(y);
    printf("The ceilling value is %.2f\n", resulty);
    return 0;
}