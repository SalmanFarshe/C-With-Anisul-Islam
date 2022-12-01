#include<stdio.h>
int main(){
    int num, position = -100, linear_search[] = {100, 20, 16, 64, 62, 59, 15, 22, 66, 30, 48, 52, 11, 48, 9, 2, 3, 6, 4, 5, 8, 7, 9, 1, 55};
    printf("Enter your deserved number = ");
    scanf("%d", &num);
    for (int i = 0; i <= 25; i++)
    {
        if (num == linear_search[i])
        {
            position = i + 1;
            break;
        }
    }
    if (position < 0 || position > 25)
    {
        printf("Sorry not found!!");
    }
    else
    {
        printf("The position in %d", position);
    }
    return 0;
}