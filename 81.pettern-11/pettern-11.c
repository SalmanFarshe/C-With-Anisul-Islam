// 5   5   5   5   5   5   

// 4   4   4   4   4

// 3   3   3   3

// 2   2   2

// 1   1

// 0

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            printf("%d   ", i);
        }
        printf("\n\n");
    }
}