#include <stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("The given Number is an Even number");
    }else{
        printf("The given Number is an Odd number");
    }
}