#include <stdio.h>
int main(){
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    if(a>b){
        printf("Large = %d", a);
    }else if (b>a){
        printf("Large = %d", b);
    }else{
        printf("They are same");
    }
}