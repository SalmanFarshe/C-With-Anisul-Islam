#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Your Limit = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 2){
        sum = sum + i * i;
    }
    printf("Sum of those number is = %d", sum);
    return 0;
}