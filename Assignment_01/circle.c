#include<stdio.h>
int main(){
    float a, r;
    float pi = 3.142;
    printf("Enter the radius: ");
    scanf("%f",&r);
    a = pi*r*r;
    printf("Area of circle = %f",a);
    return 0;
}