// postive . negative or zero.

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("&d",x);

    if(x>0){
        prinft("Postive number");
    }
    else if(x<0){
        printf("negative number");
    }
    else{
        printf("zero numbre");

    }
    return 0;
}