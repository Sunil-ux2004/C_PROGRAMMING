#include<stdio.h>
int add(int ,int );

int main(){
    int k, x,y;
    printf("Enter a two number: ");
    scanf("%d %d",&x,&y);
    k = add(x,y);
    printf(" Sum is: %d",k);
}
int add(int a, int b){
    int c;
    c = a+b;
    return c;
}