#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    // single line by sizeof() function
    printf("The memory status of a intiser nomber is %d bytes\n", sizeof(a));
    printf("The memory status of a float nomber is %d bytes\n", sizeof(b));
    printf("The memory status of a charecter  is %d bytes\n", sizeof(c));
    printf("The memory status of a double nomber is %d bytes\n", sizeof(d));
    // single line but mltiple sizeof() function
    printf("The memory status of a double nomber is %d %d %d %d bytes\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    return 0;
}