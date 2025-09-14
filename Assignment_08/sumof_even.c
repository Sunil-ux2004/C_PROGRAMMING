// write a program to print the calculate the even number natural number.

#include<stdio.h>
int main(){
    int n,sum =0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        if(i%2==0)
        sum = sum+i;
    }
    printf("sum of =%d",sum);
    return 0;
}