// n number of natural number calculate.

#include<stdio.h>
int sum();
int main(){
    int k,a;
    printf("Enter a number: ");
    scanf("%d",&a);

    k = sum(a);
    printf("%d",k);
}
int sum(int n){
    int s;
    if(n==1)
    return 1;
    s = n+sum(n-1);
    return s;

}