//write a program to swap value of two int variable in single line arithmetic expression hindi meaning
 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);

     printf("Enter the second number:");
    scanf("%d",&b);
    a = a + b -(b=a);
    printf("swap of a: =%d swap of b: =%d",a,b);
    return 0;
}