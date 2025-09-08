// write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the year: ");
    scanf("%d",&n);
             if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
                printf("its leap year");
             }
        
    else{
        printf("not leap year");
    }
    return 0;
}