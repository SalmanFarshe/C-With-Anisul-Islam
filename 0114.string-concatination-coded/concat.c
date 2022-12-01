#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0, j = 0, count = 0;
    char string_one[50] = {"Salman "};
    char string_two[] = {"Farshe"};

    while (string_one[i] != '\0')
    {
        i++;
        count++;
    }

    while (string_two[j] != '\0')
    {
        string_one[count + j] = string_two[j];
        j++;
    }
    printf("%s", string_one);
    return 0;
}