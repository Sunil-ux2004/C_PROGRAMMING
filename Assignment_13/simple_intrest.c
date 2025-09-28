#include<stdio.h>
int simpleintrest(int, int, int);
int main(){
  int k,a,b,c;
   printf("Enter the rate of intrest:  ");
  scanf("%d",&a);

  printf("Enter the rate of intrest:  ");
  scanf("%d",&b);

  printf("Enter the time duraltion:  ");
  scanf("%d",&c);

  k = simpleintrest(a,b,c);
  printf("total simple intrest: %d",k);
  return 0;

}

int simpleintrest(int p, int r,int t){
    float si;
    si = p*r*t/100;
    return si;

}