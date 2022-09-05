#include <stdio.h>
int main(){
    int x;
    printf("Enter x : ");
    scanf("%d", &x);
    x += 25;
    printf("After plus %d\n", x);
    x -= 25;
    printf("After minus %d\n", x);
    x *= 25;
    printf("After multiply %d\n", x);
    x /= 25;
    printf("After devide %d\n", x);
    x %= 25;
    printf("After modolus %d\n", x);
    return 0;
}