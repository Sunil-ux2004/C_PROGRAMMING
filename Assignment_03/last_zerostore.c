// write a program to make the last digit of a number stored in a variable as a zero(examole - if x= 2345then make it x = 2340). 

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    x = x-(x%10);
    printf("stored in azero variable: = %d",x);
    return 0;
}