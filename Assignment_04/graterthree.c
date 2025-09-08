//write a program to print greater bewteen two numbwr print one number if both are the same.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter  the first number: ");
    scanf("%d",&a);

    printf("Enter the  second number: ");
    scanf("%d",&b);

    if(a>b){
        printf("greater of A");
    }
    if(b>a){
        printf("greater then B");
    }
    if(a==b){
        printf("same");
    }
    return 0;
    
}