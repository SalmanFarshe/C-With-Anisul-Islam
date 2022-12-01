//create a pogramme which can be get input two nomber and output its avarage
#include <stdio.h>
int main()
{
    float valueOne, valueTwo, avgValue;
    printf("Enter two nomber : ");
    scanf("%f %f", &valueOne, &valueTwo);
    avgValue = (valueOne + valueTwo) / 2; // finding avg value
    printf("The avarage value is : %.2f",  avgValue);
    return 0;
}