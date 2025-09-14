// divisby by 2 or 3.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%2==0 && n%3==0){
        printf("divisiby bo 2 or 3 = %d",n);
    }
    else{
    printf("not divisiby by 2 or 3 = %d",n);
    }
    return 0;
}