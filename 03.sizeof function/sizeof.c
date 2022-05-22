#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("The memory status of a intiser nomber is %d bytes\n", sizeof(a));
    printf("The memory status of a float nomber is %d bytes\n", sizeof(b));
    printf("The memory status of a charecter  is %d bytes\n", sizeof(c));
    printf("The memory status of a double nomber is %d bytes\n", sizeof(d));
    return 0;
}