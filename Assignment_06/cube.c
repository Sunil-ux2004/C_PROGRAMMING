// write a program to print the first 10 natural number.

#include<stdio.h>
int main(){
    int cube;
    for(int i=1; i<=10; i++){
        cube =i*i*i;
        printf(" %d",cube);
    }
    return 0;
}