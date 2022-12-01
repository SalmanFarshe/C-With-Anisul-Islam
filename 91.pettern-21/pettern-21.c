// A

// B   B

// C   C   C

// D   D   D   D

// E   E   E   E   E

// D   D   D   D

// C   C   C

// B   B

// A

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%c   ", i + 64);
        }
        printf("\n\n");
    }
    for (int k = n - 1; k >= 0; k--){
        for (int l = 0; l < k; l++){
            printf("%c   ", k + 64);
        }
        printf("\n\n");
    }
}