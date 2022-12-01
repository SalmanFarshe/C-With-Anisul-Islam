#include <stdio.h>
int main(){
    int a, b, c, rslt;
    char ch;
    printf("Select your procrss '+, -, *, /' ");
    scanf("%c", &ch);
    printf("Enter Three Nombers : ");
    scanf("%d %d %d", &a, &b, &c);
    switch(ch){
        case '+' :
            rslt = a + b + c;
            printf("The Result is %d", rslt);
        break;
        case '-' :
            rslt = a + b + c;
            printf("The Result is %d", rslt);
        break;
        case '*' :
            rslt = a * b + c;
            printf("The Result is %d", rslt);
        break;
        case '/' :
            rslt = a / b / c;
            printf("The Result is %d", rslt);
        break;
    }
}