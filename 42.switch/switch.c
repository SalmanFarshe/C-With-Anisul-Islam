#include <stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    switch (x)
    {
    case 0: printf("This is zero");
        break;
    case 1: printf("This is one");
        break;
    case 2: printf("This is two");
        break;
    case 3: printf("This is three");
        break;
    case 4: printf("This is four");
        break;
    case 5: printf("This is five");
        break;
    case 6: printf("This is six");
        break;
    case 7: printf("This is seven");
        break;
    case 8: printf("This is eight");
        break;
    case 9: printf("This is nine");
        break;
        default :
            printf("Sorry invalid number");
    }
    return 0;
}