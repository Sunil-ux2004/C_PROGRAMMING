#include<stdio.h>
int main(){
    int i,x;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(i=2; i<=x-1; i++)
        if(x%2==0)
          break;
    if(i==x)
    printf("Prime");
    else
    printf("Not prime");

    return 0;
    

}