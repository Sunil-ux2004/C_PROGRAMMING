// write a program which takes the lenth of the side of a tringle as an input display whether the tringle is vaild or not.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the side of length: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && a+c>b && a+b>c){
        printf("valid");
    }
    else{
        printf("not valid ");
    }
    return 0;

}