// write a program to count digits in a given number.
#include<stdio.h>
int main(){
    int count =1 n ,x;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(x){
        x = x/10;
        count++;
    }
    printf("Digit=%d",count);
    return 0;
}