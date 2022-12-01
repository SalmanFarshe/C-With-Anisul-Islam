// 0   1   0   1   0   1

// 0   1   0   1   0

// 0   1   0   1

// 0   1   0

// 0   1

// 0
#include<stdio.h>
int main(){
    int n, result;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            result = j % 2;
            printf("%d   ", result);
        }
        printf("\n\n");
    }
}