// 1*3 + 2*5 + 3*7 + 4*9 + 5*11 + 6*13 + ............ + n1*n2
#include<stdio.h>
int main(){
    int n1, sum = 0, i;
    printf("Enter the value of n1 = ");
    scanf("%d", &n1);
    for(i = 0; i <= n1; i++){
        sum = sum + (i * (2 * i + 1));
    }
    printf("The value is = %d", sum);
    return 0;
}