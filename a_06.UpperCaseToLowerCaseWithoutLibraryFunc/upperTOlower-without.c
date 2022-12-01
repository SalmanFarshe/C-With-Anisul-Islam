#include <stdio.h>
int main()
{
    // the difference beetween a uppercase asscii and a lowercase asscii value is 32
    // So if we get lower a, the a = 97 and the upper A = 65 ( 97 - 65 = 32 )
    //  then A(65) + 32 = a(97)
    char UserGivenUpperCaseLetter;
    printf("Enter a UpperCase Letter : ");
    scanf("%c", &UserGivenUpperCaseLetter);
    printf("The LowerCase Letter is : %c",  UserGivenUpperCaseLetter + 32);
    return 0;
}