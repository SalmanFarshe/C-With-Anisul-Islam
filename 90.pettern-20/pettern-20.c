// 1

// 2   2

// 3   3   3

// 4   4   4   4

// 5   5   5   5   5

// 4   4   4   4

// 3   3   3

// 2   2

// 1

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%d   ", i);
        }
        printf("\n\n");
    }
    for (int k = n - 1; k >= 0; k--){
        for (int l = 0; l < k; l++){
            printf("%d   ", k);
        }
        printf("\n\n");
    }
}