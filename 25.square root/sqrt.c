#include <stdio.h>
#include <math.h>
int main()
{
    int a, result;
    printf("Enter a nomber to find the square root : ");
    scanf("%d", &a);
    result = sqrt(a);
    if(result*result == a){
        printf("the square root is : %d", result);
    }else{
        printf("Sorry ! the given nomber is not valid");
    }
    return 0;
}