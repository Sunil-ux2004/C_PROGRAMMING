//W.A.R.T a program to inout three digit number and display the sum of the digit.
#include<stdio.h>
int main(){
    int n , sum;
    printf("Entre the number: ");
    scanf("%d",&n);
    sum = n/100+n/10%10+n%10;
    printf("Sum of: = %d",sum);
    return 0;

}