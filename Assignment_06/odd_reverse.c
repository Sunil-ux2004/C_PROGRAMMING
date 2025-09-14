//write a program 10 natural number odd number reverse order.


#include<stdio.h>
int main(){
    for(int i=10; i>=1; i--){
        if(i%2!=0)
        printf(" %d",i);
    }
    return 0;
}