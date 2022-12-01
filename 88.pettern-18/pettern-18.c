// 0

// 0   1

// 0   1   2

// 0   1   2   3

// 0   1   2

// 0   1

// 0

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            printf("%d   ", j);
        }
        printf("\n\n");
    }
    for (int k = n; k >= 0; k--){
        for (int l = 0; l < k; l++){
            printf("%d   ", l);
        }
        printf("\n\n");
    }
}