#include<stdio.h>
int main(){
    int salman[5];
    salman[0] = 26;
    salman[1] = 74;
    salman[2] = 52;
    salman[3] = 63;
    salman[4] = 56;
    printf("The 1st index value is %d\n", salman[0]);
    printf("The 2nd index value is %d\n", salman[1]);
    printf("The 3rd index value is %d\n", salman[2]);
    printf("The 4th index value is %d\n", salman[3]);
    printf("The 5th index value is %d\n", salman[4]);
    int sum = salman[0] + salman[1] + salman[2] + salman[3] + salman[4];
    printf("Sum of all index id %d\n", sum);

    // another methood
    int salman2[5] = {10, 20, 30, 40, 50};
    printf("1st index = %d", salman2[0]);
}