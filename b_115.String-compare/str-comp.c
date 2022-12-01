#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = {"salman"};
    char str2[] = {"salman"};
    int d = strcmp(str1, str2);
    if (d==0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    char str11[] = {"salman"};
    char str22[] = {"Salman"};
    int dd = strcmp(str11, str22);
    if (dd==0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    
}