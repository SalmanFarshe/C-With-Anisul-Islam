#include <stdio.h>
int main()
{
    //convert decemel to octal, hexal
       int decemelNumber, octalNumber, hexalNumber;
       
        printf("Enter your decemel nomber : ");
        scanf("%d", &decemelNumber);
        printf("The octal nomber is %o and the hexal is %x\n", decemelNumber, decemelNumber);

    //convert octal to  hexal, decemel
        printf("Enter your octal nomber : ");
        scanf("%o", &octalNumber);
        printf("The hexal nomber is %x and the decemel is %d\n", octalNumber, octalNumber);
    
    //convert hexal to  octal, decemel
        printf("Enter your hexal nomber : ");
        scanf("%x", &hexalNumber);
        printf("The octal nomber is %o and the decemel is %d", hexalNumber, hexalNumber);
       return 0;
}