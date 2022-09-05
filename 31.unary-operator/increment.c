#include <stdio.h>
int main(){
// post increment
    int i, result;
    scanf("%d", &i);
    printf("%d\n", i++);
    printf("%d\n", i);
    printf("%d\n", i);

// pre increment
    int j, resultj;
    scanf("%d", &j);
    printf("%d\n", ++j);
    printf("%d", j);
    return 0;
}
