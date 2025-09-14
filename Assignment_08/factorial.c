// write s program to print the n factoria number.

#include<stdio.h>
int main(){
    int n,p=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        p = p*i;
    }
    
    printf("factoral of: =%d",p);
    
    return 0;
}