#include<stdio.h>
int main(){
    int arr[5], sum = 0;
    printf("Enter 5 number = ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    for (int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    printf("The sumation is = %d", sum);
    return 0;
}