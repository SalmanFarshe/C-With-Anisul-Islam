// 12345
//  1234
//   123
//    12
//     1

//  1 2 3 4 5
//   1 2 3 4
//    1 2 3
//     1 2
//      1

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N = ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--){
        for (int k = 1; k <= n - i; k++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}