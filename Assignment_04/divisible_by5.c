//write a program to check whether a given number is divisible by 5.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n/5){
        printf("Divisible by 5: ");
    }
    else{
        printf("not divisible by 5: ");
    }
    return 0;
}