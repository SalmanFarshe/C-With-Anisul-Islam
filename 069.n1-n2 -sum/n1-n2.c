// sum = 1-2+3-4+5-6+7-8+9-10+.........
// or modified = (1+3+5+7+9+....) - (2+4+6+8+10+....)
#include<stdio.h>
int main(){
    int n, sum, oddSum = 0, evenSum = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        if(i % 2 == 0){
            evenSum = evenSum + i;
        }else{
            oddSum = oddSum + i;
        }
        sum = oddSum - evenSum;
    }
    printf("The sum is %d", sum);
    return 0;
}