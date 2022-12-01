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
    if(num == sum){
        printf("Pallindrome");
    }else{
        printf("Not a Pallindrom");
    }
    return 0;
}