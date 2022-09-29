// factorial of n
// 5! = 5 * 4 * 3 * 2 * 1
#include <stdio.h>
int main(){
    int i, n, result = 1 ;
    printf("Enter the value of n = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){   
        result *=  i;
    }
    printf("%d\n", result);
    return 0;
}