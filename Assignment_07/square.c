// write a program to print the n terms square number.

#include<stdio.h>
int main(){
    int i =1, side ,n;
    printf("Enter the numnber: ");
    scanf("%d",&n);
    while(i<=10){
       side = i*i;
        printf(" %d",side);
        i++;
        
    }
    return 0;
}