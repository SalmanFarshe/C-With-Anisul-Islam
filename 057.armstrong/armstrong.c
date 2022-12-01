#include<stdio.h>
int main(){
    int i, sum = 0, temp, r, num;
    printf("Enter any number = ");
    scanf("%d", &num);
    for(i = 0; i <= num; i++){
        temp = i;
        while(temp != 0){
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        if(sum == i){
            printf("%d ", i);
        }
        sum = 0;
    }
    return 0;
}