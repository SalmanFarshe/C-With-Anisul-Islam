#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10] = {"salman"}, temp[10], str2[10] = {"Farshe"};
    printf("%s\n", str1);
    printf("%s\n", str2);
    
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    
    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}
