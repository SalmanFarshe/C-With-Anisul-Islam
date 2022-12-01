#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10] = {"SaLmAn"};
    char str2[10] = {"farshe"};
    char str3[10] = {"ZIHAD"};

    printf("%s\n", strupr(str1));
    printf("%s\n", strlwr(str1));
    printf("%s\n", strupr(str2));
    printf("%s\n", strlwr(str3));
    return 0;
}