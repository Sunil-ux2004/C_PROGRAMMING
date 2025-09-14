// write a program to find the greater among three given number print number once if the greater number appers two or three times.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);

     printf("enter the second number:");
    scanf("%d",&b);

     printf("enter the third number:");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("greater of a");

    }
    else if(b>a && a>c){
        printf("greater of b");
    }
    else{
        printf("greater of c");
    }
    return 0;


}