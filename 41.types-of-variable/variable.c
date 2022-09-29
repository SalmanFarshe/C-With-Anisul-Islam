#include<stdio.h>
int b = 20, c = 30; 
int main(){
    int a = 10;
    printf("Inside the main function a = %d\nInside the main function b = %d\nInside the main function c = %d\n", a, b, c);
    display();
}
void display(){
    int a = 15;
    printf("Inside the main function a = %d\nInside the main function b = %d\nInside the main function c = %d", a, b, c);// error for local function
}