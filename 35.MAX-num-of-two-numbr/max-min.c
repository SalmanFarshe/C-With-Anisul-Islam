#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two nomber ");
    scanf("%d %d", &x, &y);
    if(x>y){
        printf("x is large and y is small");
    }else if(y>x){
        printf("y is large and x is small");
    }else{
        printf("They are same");
    }
    return 0;
}