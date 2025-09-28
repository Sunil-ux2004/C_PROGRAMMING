// n number of natural factorial calculate.

#include<stdio.h>
int fact();
int main(){
    int k,a;
    printf("Enter a number: ");
    scanf("%d",&a);

    k = fact(a);
    printf("%d",k);
}
int fact(int n){
    int s;
    if(n==0)
    return 1;
    s = n*fact(n-1);
    return s;

}