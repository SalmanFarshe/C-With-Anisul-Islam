#include <stdio.h>

int main(){
    int x, result = 0;
    printf("Enter a number = ");
    scanf("%d", &x);
    for (int i = 2; i < x; i++){
        if (x % i == 0){
            result++;
            break;
        }
    }
    if(result == 0){
        printf("Its a prime number\n");
    }else{
        printf("Its not  a prime number\n");
    }
}