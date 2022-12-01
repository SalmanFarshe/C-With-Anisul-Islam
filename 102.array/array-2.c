#include<stdio.h>
int main(){
    int arr[10], sum = 0;
    arr[0] = 10, arr[1] = 10, arr[2] = 10, arr[3] = 10, arr[4] = 10;
    arr[5] = 10, arr[6] = 10, arr[7] = 10, arr[8] = 10, arr[9] = 10;
    // arr[10] = 10;
    for (int i = 0; i <= 10; i++){
        sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}