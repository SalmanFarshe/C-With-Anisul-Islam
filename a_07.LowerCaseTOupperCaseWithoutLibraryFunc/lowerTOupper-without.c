#include <stdio.h>
int main()
    // the difference beetween a uppercase asscii and a lowercase asscii value is 32
    // So if we get lower a, the a = 97 and the upper A = 65 ( 97 - 65 = 32 )
    //  then a(97) -  32 = A(65)
{
    char UserGivenLowerCaseLetter;
    printf("Enter a LowerCase Letter : ");
    scanf("%c", &UserGivenLowerCaseLetter);
    printf("The UpperCase Letter is : %c",  UserGivenLowerCaseLetter - 32);
    return 0;
}