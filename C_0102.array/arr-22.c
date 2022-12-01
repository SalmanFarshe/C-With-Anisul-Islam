#include<stdio.h>
int main(){
    int arr[1], sum = 0, n;
    printf("Enter any number = ");
    scanf("%d", &n);
    // scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("Enter the numbers = ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    printf("The sumation is = %d", sum);
    return 0;
}