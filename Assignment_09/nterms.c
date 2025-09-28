//write a program to print the first n terms of fibonacci series.

#include<stdio.h>
int main(){
    int a = -1, b = 1, c,n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        c = a+b;
        printf(" %d",c);
        a = b;
        b = c;
    }
    return 0;
}