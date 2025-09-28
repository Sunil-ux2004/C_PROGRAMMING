// write a program to calculate the hcf of two number.

#include<stdio.h>
int main(){
    int a,b,h;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    
    for(h = a<b? a:b; h>=1; h--){
        if(a%h==0 && b%h==0)
        break;
    }
    printf("hcf is %d",h);
    return 0;
}