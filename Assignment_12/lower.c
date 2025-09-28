#include<stdio.h>
int main(){
    char  x;
    printf("Enter the symbole: ");
    scanf("%c",&x);

    switch (x)
    {
    case 'A'...'Z':
        printf("Uppercase");
        break;

    case 'a'...'z':
        printf("Uppercase");
        break;
    
    default:
    printf("Special charcter");
        break;
    }
    return 0;


}
