// write a program to take a three digit number from the user and rotate its digits by one postiion towords the right.

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    x = (x%10*100+x/10%10*10+x/100);
    printf("Rotate of:  = %d",x);
    return 0;
}