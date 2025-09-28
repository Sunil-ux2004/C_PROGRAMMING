// write a program to print the prime or not.

#include<stdio.h>
int main(){
    int i,x,n;
    printf("Enter the number: ");
    scanf("%d",&x);

    for(int i=2;i<=x-1;i++){
        if(x%i==0)
        break;
                          
         if(i==x)
        printf("prime");
         
        else
        printf("not prime");
        
        printf("\n");
        return 0;

    }
}