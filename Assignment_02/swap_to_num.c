// w.r.t a program to swap value of two numbers int variables.
 #include<stdio.h>
 int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swap of A: = %d  swap of B: = %d ",a,b);
    return 0;

 }