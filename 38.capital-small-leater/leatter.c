#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Your Leter ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("This is a capital leter");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("This is a small leter");
    }else{
        printf("Sorry this is not a leter");
    }
    return 0;
}