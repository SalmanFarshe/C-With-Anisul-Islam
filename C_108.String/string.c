#include<stdio.h>
int main(){
    char arr[] = {'s', 'd', 'f', 'g', 'k', '\0'};
    printf("%s\n", arr);
    char str[100];
    gets(str);
    printf("%s", str);
    return 0;
}