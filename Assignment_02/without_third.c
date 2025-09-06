//write a program to swap value of two int variable without using third varibale and without using - ,+ operators no program only logic//

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);

     printf("Enter the second number: ");
    scanf("%d",&b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("swap of a: = %d swap of b: = %d",a,b);
    return 0;

}