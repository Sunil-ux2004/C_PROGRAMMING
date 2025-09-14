// write a program to calculate sum of square of first n natural number.

#include<stdio.h>
int main(){
    int n, square=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i= 1; i<=n; i++){

        square = square+(i*i);
    }
    printf("square: =%d",square);
    return 0;
}