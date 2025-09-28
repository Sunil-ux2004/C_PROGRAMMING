#include<stdio.h>
int oddeven(int);
int main(){
    int k,a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    k = oddeven(a);
    printf("even ");
    printf("odd");
}
 int oddeven(int x){
    return x%2?0:1;

 }