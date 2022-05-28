#include <stdio.h>
int main()
{
    // convert lowerCase to upperCase
    char UserGivenLowerCaseLetter;
    printf("Enter a Lower case letter : ");
    scanf("%c", &UserGivenLowerCaseLetter);
    UserGivenLowerCaseLetter = toupper(UserGivenLowerCaseLetter);
    printf("The uppercase letter is : %c\n", UserGivenLowerCaseLetter);
    return 0;
}