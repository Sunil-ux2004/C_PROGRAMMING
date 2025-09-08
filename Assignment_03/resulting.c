// write a program to input a number froom the user and also input a digit append a digit in the number and print the resulting number (ex number = 234and digit = 9 then the resulting number in 2349.)

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    x = (x*10)+9;
    printf("Resulting number: =%d",x);
    return 0;

}