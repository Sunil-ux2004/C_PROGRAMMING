// write a program to check whether  a given number is a three digit number or not.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>99 && n<999){
        printf("its three digit number");
    }
    else{
    printf("not a three digit number");
}
    return 0;

}