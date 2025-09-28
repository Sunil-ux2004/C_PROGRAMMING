#include<stdio.h>
int main(){
    char x;
    printf("Enter the symbole: ");
    scanf("%c",&x);

    switch (x)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case'U': 
          printf("Vowel");
        break;

    case 'B'...'D':
    case 'J'...'N':
    case 'P'...'T':
    case 'V'...'Z':
       printf("Consonent");
    
    default:
    printf("Special charcter");
        break;
    }
    return 0;
}