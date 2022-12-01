#include<stdio.h>
int main(){
    int n;
    printf("Your Limit = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i = i + 2){
        printf("%d\n", i);
    }
    return 0;
}