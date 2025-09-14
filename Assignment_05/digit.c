// upper case, lower case and digit or special charcter.

#include<stdio.h>
int main(){
    char x;
    printf("Enter the charcter: ");
    scanf("%c",&x);

    if(x>='A' && x<='Z'){
        printf("Upper case ");

    }
    else if(x>='a' && x<='z'){
        printf("lower case ");
    }
    else if(x>='0' && x<='9'){
        printf("Digit");
    }
    else{
        printf("Special charchert");
    }
    return 0;
}