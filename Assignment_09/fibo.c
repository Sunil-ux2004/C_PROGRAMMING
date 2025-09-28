// wite a program to check whether a given number is there in the fibonacci series or not.

#include<stdio.h>
int main(){
    int a = -1, b = 1,c,n;
    printf("enter the number: ");
    scanf("%d",&n);

    for(int i=0;  i<=n; i++){
        c = a+b;
        if(c==n){
            printf("%d is %d terms in the series ", n,i);
            break;
        }
        if(c>n){
            printf("%d is not in the series",n);
            break;
        }
        a = b;
        b = c;
    }
    return 0;
}