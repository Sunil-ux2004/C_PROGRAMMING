// write a program to count digits in a given number.
#include<stdio.h>
int main(){
    int count =0,x;
    printf("Enter the number:");
    scanf("%d",&x);
    while(x){
        x = x/10;
        count++;
    }
    printf("Digit=%d",count);
    return 0;
}