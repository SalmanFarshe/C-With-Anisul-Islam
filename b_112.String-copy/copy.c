#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Salman Farshe";
    char str_copy[20];
    strcpy(str_copy, str);
    printf("%s\n", str);
    printf("%s", str_copy);
}