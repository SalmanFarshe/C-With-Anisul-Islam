#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    int i = 0, vowel = 0, digit = 0, consonant = 0, word = 0, other = 0;
    printf("Enter a string = ");
    gets(str1);
    while (str1[i] != '\0')
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U' )
        {
            vowel++;
        }
        else if ((str1[i] > 'a' && str1[i] < 'z') || (str1[i] > 'A' && str1[i] < 'Z'))
        {
            consonant++;
        }
        else if (str1[i] >= '0' && str1[i] <= '9')
        {
            digit++;
        }
        else if (str1[i] == ' ')
        {
            word++;
        }
        else
        {
            other++;
        }
        i++;
    }
        printf("Vowel = %d\n", vowel);
        printf("Consonant = %d\n", consonant);
        printf("Word = %d\n", ++word);
        printf("Digit = %d\n", digit);
        printf("Other = %d\n", other);
    return 0;
}