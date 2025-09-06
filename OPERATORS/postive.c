#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    if(n<=0){
        printf("Non Positive number");
    }
    return 0;
}