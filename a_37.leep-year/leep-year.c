#include <stdio.h>
int main()
{
    int year;
    printf("Enter year ");
    scanf("%d", &year);
    if(year % 400 == 0){
        printf("Leep Year");
    }else if(year % 4 == 0 && year % 100 != 0){
        printf("Leep Year");
    }else{
        printf("Not leep year");
    }
    return 0;
}