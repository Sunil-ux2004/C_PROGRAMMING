// write a program to print the n terms natural number.

#include<stdio.h>
int main(){
    int x,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i= 1; i<=n; i++){
        printf("%d \n",i);
    }
    return 0;
}