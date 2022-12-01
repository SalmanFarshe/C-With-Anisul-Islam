#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    gets(name);
    char name_rev[100];
    gets(name_rev);
    int chk = strcmp(name, strrev(name_rev));
    if (chk == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}