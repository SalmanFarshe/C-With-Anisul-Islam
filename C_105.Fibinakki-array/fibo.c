#include<stdio.h>
int main(){
    int fibo[50], num;
    printf("Enter The final point number: ");
    scanf("%d", &num);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int j = 0; j <= num; j++)
    {
        printf("%d ", fibo[j]);
    }
    return 0;
}