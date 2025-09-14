// write a program to print the n terms natural number.

#include<stdio.h>
int main(){
    int cube, n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        cube =i*i*i;
        printf(" %d",cube);
    }
    return 0;
}