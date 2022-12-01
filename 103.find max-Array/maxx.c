#include<stdio.h>
int main(){
    int arr[100], num;
    printf("Enter a numbers = ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        if (i == 0){
            printf("Enter 1st number = ");
        }
        else if(i == 1){
            printf("Enter 2nd number = ");
        }
        else if(i == 2){
            printf("Enter 3rd number = ");
        }
        else if(i == 3){
            printf("Enter 4th number = ");
        }
        else{
            printf("Enter %dth number = ", i+1);
        }
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int j = 0; j <= num; j++){
        if (max < arr[j]){
            max = arr[j];
        }
    }
    printf("The max number is %d", max);
    return 0;
}