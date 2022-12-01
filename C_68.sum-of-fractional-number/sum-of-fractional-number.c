#include<stdio.h>
int main(){
    float n, sum = 0;
    printf("Your Limit = ");
    scanf("%f", &n);
    for (int i = 0; i <= n; i = i + 2){
        sum = sum + (1 / i);
    }
    printf("Sum of those number is = %f", sum);
    return 0;
}