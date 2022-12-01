#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    gets(name);
    int length = strlen(name);
    char reverse_name[30];
    for (int j = 0, i = length - 1; i >= 0; i--, j++)
    {
        reverse_name[j] = name[i];
    }
    printf("%s\n", reverse_name);
    printf("%d\n", strlen(reverse_name));
    printf("%d", length);
    return 0;
}