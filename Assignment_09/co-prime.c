// write a program to check whether two given number are co-prime number or not.

#include<stdio.h>
int main(){
    int a,b,h;
    printf("\n Enter the two number: ");
    scanf("%d %d",&a,&b);

    for(h = a<b? a:b; h>=1; h--){
        if(h==1){
            printf("co-prime number");
        }
    }
    return 0;
}