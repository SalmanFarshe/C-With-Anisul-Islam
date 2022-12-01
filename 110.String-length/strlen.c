#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    gets(name);
    int length = strlen(name);
    printf("%d", length);
    return 0;
}