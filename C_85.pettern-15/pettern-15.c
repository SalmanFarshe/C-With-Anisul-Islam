// A   B   C   D   E   F

// A   B   C   D   E

// A   B   C   D

// A   B   C

// A   B

// A

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = n; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            printf("%c   ", j + 65);
        }
        printf("\n\n");
    }
}