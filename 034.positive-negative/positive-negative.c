#include <stdio.h>
int main(){
    printf("Enter a Number : ");
    int x;
    scanf("%d", &x);
    if(x>0){
        printf("The Number %d is a Positive number", x);
    }else if(x<0){
        printf("The Number %d is a Negative number", x);
    }else{
        printf("Its ZEROOOO");
    }
    return 0;
}