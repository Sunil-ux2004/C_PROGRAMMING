// write a program to print the all prime number under 100.

#include<stdio.h>
int main(){
    int l =2,u=100,x,i;

    for(x=l; x<=u; x++){
        for(i=2; i<=x; i++)
        if(x%i==0)
        break;

        if(i==x)
        printf("%d  ",x);
    }
    return 0;
}