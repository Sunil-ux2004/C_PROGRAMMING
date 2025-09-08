//write a program to check whether a given number is an even an odd number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
      printf("its even number");
    }
    else{
        printf("its odd number");
    }
    return 0;
}