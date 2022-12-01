#include<stdio.h>
int main(){
    int n, i, sum = 0;
    printf("Enter The Value Of n = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i = i + 2){
        sum += i;
    }
    printf("The Value is = %d", sum);
    return 0;
}