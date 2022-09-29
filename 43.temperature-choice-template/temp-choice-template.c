#include<stdio.h>
int main(){
    int option, C, F, K;
    printf("Temperature conversion template\n");
    printf("1.Celcius to Farenhite\n");
    printf("2.Celcius to Kelvin\n");
    printf("Select your Choise ");
    scanf("%d", &option);
    switch (option){
        case 1: {
            printf("Enter the celcius value : ");
            scanf("%d", &C);
            F = (C * 9 / 5) + 32;
            printf("The Kelvin value is %d", F);
            break;
        }
        case 2: {
            printf("Enter the celcius value : ");
            scanf("%d", &C);
            K = C + 273.15;
            printf("The Kelvin value is %d", K);
            break;
        }
        default:
            printf("The Value is invalid");
    }
}