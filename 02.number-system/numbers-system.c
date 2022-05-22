#include<stdio.h>
int main(){
    int intnumber01, intnumber02, intnumber03, intnumber04, intnumber05;
    float fltnumber01, fltnumber02, fltnumber03, fltnumber04, fltnumber05;
    float point01fltnumber01, point01fltnumber02, point01fltnumber03, point01fltnumber04, point01fltnumber05;
    printf("Enter the integer numbers : ");
    scanf("%d %d %d %d %d", &intnumber01, &intnumber02, &intnumber03, &intnumber04, &intnumber05);
    printf("The number is %d, %d, %d, %d and %d\n\n\n", intnumber01, intnumber02, intnumber03, intnumber04, intnumber05);
    
    printf("Enter the float numbers : ");
    scanf("%f %f %f %f %f", &fltnumber01, &fltnumber02, &fltnumber03, &fltnumber04, &fltnumber05);
    printf("The number is %f, %f, %f, %f and %f\n\n\n", fltnumber01, fltnumber02, fltnumber03, fltnumber04, fltnumber05);

    printf("Enter the one positioned numbers : ");
    scanf("%f %f %f %f %f", &point01fltnumber01, &point01fltnumber02, &point01fltnumber03, &point01fltnumber04, &point01fltnumber05);
    printf("The number is %.1f, %.1f, %.1f, %.1f and %.1f", point01fltnumber01, point01fltnumber02, point01fltnumber03, point01fltnumber04, point01fltnumber05);
 
    return 0;
}