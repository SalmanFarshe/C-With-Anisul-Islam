#include <stdio.h>
int main(){
// post decrement
    int i, result;
    scanf("%d", &i);
    printf("%d\n", i--);
    printf("%d\n", i);
    printf("%d\n", i);

// pre decrement
    int j, resultj;
    scanf("%d", &j);
    printf("%d\n", --j);
    printf("%d", j);
    return 0;
}
