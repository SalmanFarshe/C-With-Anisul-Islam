#include <stdio.h>
int main()
{
    float C, F, K;
    printf("Celcius = ");
    scanf("%f", &C);
        F = ((C*9)/5)+32;
        K = C + 273;
        printf("Farenhite is %.2f\n", F);
        printf("Kelvin is %.2f", K);
        return 0;
}