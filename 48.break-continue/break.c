#include <stdio.h>
int main(){
    int i = 0;
    for (i; i <= 100; i++){
        printf("%d\n", i);
        if(i==50){
            printf("break for %d", i);
            break;
        }
    }
}