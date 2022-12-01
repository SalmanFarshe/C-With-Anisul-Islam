// F   F   F   F   F   F

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
    for (int i = n; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            printf("%c   ", i + 65);
        }
        printf("\n\n");
    }
}