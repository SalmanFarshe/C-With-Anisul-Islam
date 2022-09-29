#include <stdio.h>
int main(){
    int i = 0;
    for (i; i <= 10; i++){
        if(i==5){
            continue;
            printf("Continue %d\n", i);
        }
        printf("%d\n", i);
    }
}