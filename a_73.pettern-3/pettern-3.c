// 0

// 1   1

// 2   2   2

// 3   3   3   3

// 4   4   4   4   4

// 5   5   5   5   5   5

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            printf("%d   ", i);
        }
        printf("\n\n");
    }
}