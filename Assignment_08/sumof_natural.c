// write a program to print the calculate the sum of natural number.

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i  =1; i<=n; i++){
        sum = sum+i;
    }
    printf("Sum of =%d",sum);
    return 0;
}
