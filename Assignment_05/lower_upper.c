//lower and upper case 

#include<stdio.h>
int main(){
    char x;
    printf("Enter the charcter: ");
    scanf("%c",&x);
    if(x>='A' && x<='Z'){
        printf("upper case");
    }
    else if(x>='a' && x<='z'){
        printf("lower case");

    }
    else {
        printf("not alphabet");
    }
    return 0;
}