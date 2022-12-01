#include<stdio.h>
int main(){
    int arr_1[30] = {10, 2, 30, 3, 40, 5}, arr_2[30], i;
    printf("Array-1 = ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr_1[i]);
    }
    printf("\nArray-2 = ");
    for (i = 0; i < 6; i++)
    {
        arr_2[i] = arr_1[i];
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr_2[i]);
    }
    return 0;
}