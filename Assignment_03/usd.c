//Assume price of 1 usd is INR 84.23. write a program to take the amont in inr and convert in into usd.)

#include<stdio.h>
int main(){
    float x;
    printf("Enter the number: ");
    scanf("%f",&x);
    x = x*1/84.23;
    printf("convert into usd: =%d",x);
    return 0;
}