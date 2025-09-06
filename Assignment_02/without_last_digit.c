// w.r.t. to print a given number without its last digit.

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("without last digit: =  %d",x/10);
    return 0;
}