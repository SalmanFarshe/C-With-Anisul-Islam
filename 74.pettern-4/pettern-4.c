// 0   

// 0   1

// 0   1   0

// 0   1   0   1

// 0   1   0   1   0

// 0   1   0   1   0   1

#include<stdio.h>
int main(){
    int n, result;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            result = j % 2;
            printf("%d   ", result);
        }
        printf("\n\n");
    }
}