// write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>
int main(){
    int m;
    printf("Enter the month:");
    scanf("%d",&m);

    if(m==1 || m==3 || m==5 || m==7 ||m==8 || m==10 || m==12 ){
        printf("days of 31");
    }
    else if(m==4 || m==6 || m==9 || m==11){
        printf("Days of 30");
    }
    else{
        printf("Days of 28 0r 29");
    }
    return 0;

}