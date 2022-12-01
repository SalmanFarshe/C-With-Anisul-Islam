#include <stdio.h>
int main()
{
    int mark;
    printf("Enter your mark ");
    scanf("%d", &mark);
    if(mark > 100 ){
        printf("Invalid mark");
    }
    else if(mark < 0){
        printf("Invalid mark");
    }
    else if( mark <= 100 && mark >= 80 ){
        printf("You got A+ (4.00)");
    }
    else if(mark <= 79 && mark >= 75){
        printf("You got A (3.75)");
    }
    else if(mark <= 74 && mark >= 70){
        printf("You got A- (3.50)");
    }
    else if(mark <= 69 && mark >= 65){
        printf("You got B (3.25)");
    }
    else if(mark <= 64 && mark >= 60){
        printf("You got B- (3.00)");
    }
    else if(mark <= 59 && mark >= 55){
        printf("You got C (2.75)");
    }
    else if(mark <= 54 && mark >= 50){
        printf("You got C- (2.50)");
    }
    else if(mark <= 49 && mark >= 45){
        printf("You got D (2.25)");
    }
    else if(mark <= 44 && mark >= 40){
        printf("You got D- (2.00)");
    }
    else if(mark <= 39 && mark >= 33){
        printf("You got E (1.75)");
    }else{
        printf("You got F (0.00)");
    }
    return 0;
}