#include<stdio.h>
#include<string.h>
int main()
{
    char fst_name[] = "Salman Farshe ";
    char lst_name[] = "jihad";

    strcat(fst_name, lst_name);
    
    printf("%s\n", fst_name);
    printf("%s\n", lst_name);
    
    strcat(lst_name, " And someone special");
    
    printf("%s", lst_name);
    return 0;
}