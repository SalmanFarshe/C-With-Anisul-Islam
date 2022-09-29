#include<stdio.h>
int main(){
    int i;
    printf("Enter the value of i = ");
    scanf("%d", &i);
    for (i; i <= 100; i++){
        if (i%2==0){
            printf("This is EVEN %d\n", i);
        }else{
            printf("This is Odd %d\n", i);
        }
        
    }
    
}