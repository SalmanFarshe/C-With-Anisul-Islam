// A   

// B   B

// C   C   C

// D   D   D   D

// E   E   E   E   E

// F   F   F   F   F   F

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= i; j++){
            printf("%c   ", i + 65);
        }
        printf("\n\n");
    }
}