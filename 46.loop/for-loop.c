#include <stdio.h>
int main(){
    int x = 0, i;
    printf("enter a number :");
    scanf("%d", &i);
    for (x; x<=i; x++){
        printf("Hello World %d\n", x);
    }
}