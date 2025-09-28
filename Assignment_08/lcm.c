#include<stdio.h>
int main(){
    int l, a,b;
    printf("Enter the first  number: ");
    scanf("%d",&a);

    printf("Enter the second  number: ");
    scanf("%d",&b);

    for(l=a>b?a:b;l<=a*b; l++){
        if(l%a==0&&l%b==0){
             printf("Lcm of: %d",l);
             break;

        }

    }
   
    return 0;
}