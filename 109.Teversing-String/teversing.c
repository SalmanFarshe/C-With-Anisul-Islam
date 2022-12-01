#include<stdio.h>
int main(){
    char s[100];
    gets(s);
    int i = 0;
    while (s[i] != '\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
    return 0;
}