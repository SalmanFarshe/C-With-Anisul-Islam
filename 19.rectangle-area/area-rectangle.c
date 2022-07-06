#include <stdio.h>
#include <math.h>
int main(){
    float height, width, area;
    printf("Height = ");
    scanf("%f", &height);
    printf("Width = ");
    scanf("%f", &width);
    area = height * width;
    printf("The area is = %.2f", area);
    return 0;
}