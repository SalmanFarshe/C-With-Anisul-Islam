// 0   1   2   3   4   5   

// 0   1   2   3   4

// 0   1   2   3

// 0   1   2

// 0   1

// 0

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            printf("%d   ", j);
        }
        printf("\n\n");
    }
}