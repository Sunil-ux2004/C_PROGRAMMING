#include<stdio.h>
int area(int);
int main(){
  int k, x;
  printf("Enter the number: ");
  scanf("%d",&x);
  k = area(x);
  printf("Area of: %d",k);
  return 0;
}
int area(int r){
    float a;
    a = 3.145*r*r;
    return a;
}