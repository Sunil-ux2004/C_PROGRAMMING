// print the sum of natiral number in recursion


#include<stdio.h>
int  f1();
int main(){
    int k = 3;
    k= f1(3);
    printf("Sum of %d",k);

}

int f1(int n){
    int s;
    if(n==1)
    return 1;
    s = n+f1(n-1);
    return s;
}