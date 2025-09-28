// write a program to find the Nth terms of the fibonacci series.

#include<stdio.h>
int main(){
    int a =-1, b=1,c,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        c = a+b;
        a = b;
        b = c;

    }
    printf(" series of: =  %d",c);
    return 0;

}