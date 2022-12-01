#include<stdio.h>
int main(){
    int n, j, i;
    printf("Enter a number ");
    scanf("%d", &n);
    for(i = 1; i<= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j * i);
        }
        printf("\n");
    }
}