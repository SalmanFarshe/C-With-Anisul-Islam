#include<stdio.h>
int main(){
    int a = 0;
    salman:
        printf("%d\t", a);
        a++;
        if (a <= 10)
        goto salman;
        return 0;
}