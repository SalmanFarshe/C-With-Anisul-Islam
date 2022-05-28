#include <stdio.h>
int main()
{
    // convert upperCase to lowerCase
    char UserGivenUpperCaseLetter;
    printf("Enter a upper case letter : ");
    scanf("%c", &UserGivenUpperCaseLetter);
    UserGivenUpperCaseLetter = tolower(UserGivenUpperCaseLetter);
    printf("The lowerCase letter is : %c", UserGivenUpperCaseLetter);
    return 0;
}