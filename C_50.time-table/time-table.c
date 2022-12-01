/** enter any number = n;
 *  enter multiply end point = i;
 *   n * 1 = n
 *   n * 2 = 2n
 *   n * 3 = 3n
 *   n * 4 = 4n
 *   n * 5 = 5n
 *   n * 6 = 6n
 *   n * 7 = 7n
 *   n * 8 = 8n
 *   ..........
 *   ..........
 *   n * i = ni
 * **/
#include <stdio.h>
int main(){
    while(1){
         int n, i, result;
         printf("Enter the value of n = ");
         scanf("%d", &n);
         printf("Enter the value of i = ");
         scanf("%d", &i);
            for (int x = 1; x <= i; x++){
                result = n * x;
                printf("%d * %d = %d\n", n, x, result);
            }
        }
}