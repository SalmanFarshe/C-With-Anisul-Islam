#include<stdio.h>
int main(){
    int num, fact, i, sum = 0, temp, r;
    printf("Enter a number = ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        r = temp % 10;
        fact = 1;
        for (i = 1; i <= r; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        temp = sum / 10;
    }
    printf("%d", sum);
    return 0;
}