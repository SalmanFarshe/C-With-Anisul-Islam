// 1*2 + 2*3 + 3*4 + 4*5 + 5*6 + 6*7 + ............ + n
#include<stdio.h>
int main(){
    int n1, sum = 0, i;
    printf("Enter the value of n1 = ");
    scanf("%d", &n1);
    for(i = 0; i <= n1; i++){
        sum = sum + (i * (i + 1));
    }
    printf("The value is = %d", sum);
    return 0;
}