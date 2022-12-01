#include<stdio.h>
int main(){
    int sum = 0, temp, r, num;
    printf("Enter any number = ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    printf("Sum of the digit is %d", sum);
    return 0;
}