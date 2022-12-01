//   1
//  12
// 123
//  12
//   1

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = 1; i <= n ; i++){
        for (int k = 1; k <= n - i; k++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    for (int a = n - 1; a >= 1; a--){
        for (int b = 1; b <= n - a; b++){
            printf(" ");
        }
        for (int c = 1; c <= a; c++){
            printf("%d", c);
        }
        printf("\n");
    }
}