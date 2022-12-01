#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    int i = 0, cap = 0, sml = 0;
    gets(str1);
    while (str1[i] != '\0')
    {
        if (str1[i] >= 65 && str1[i] <= 90)
        {
            cap++;
        }
        else if(str1[i] >= 97 && str1[i] <= 122)
        {
            sml++;
        }
        i++;
    }
    printf("Capital = %d\n", cap);
    printf("Small = %d\n", sml);
    
    // printf("%d %d %d %d ", 'A', 'Z', 'a', 'z');
    return 0;   
}