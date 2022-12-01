#include<stdio.h>
int main(){
    int n, count, fibonacci, firstFibo = 0, SecondFibo = 1;
    printf("Enter a number = ");
    scanf("%d", &n);
    for(count = 0; count <= n; count++){
        if(count <= 1){
            fibonacci = count;
        }else{
            fibonacci = firstFibo + SecondFibo;
            firstFibo = SecondFibo;
            SecondFibo = fibonacci;
        }
        printf("%d ", fibonacci);
    }
    return 0;
}