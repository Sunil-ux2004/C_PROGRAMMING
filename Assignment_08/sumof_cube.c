// write a program to calculate sum of cube of first n natural number.

#include<stdio.h>
int main(){
    int n, cube=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i= 1; i<=n; i++){

        cube = cube+(i*i*i);
    }
    printf("cube: =%d",cube);
    return 0;
}