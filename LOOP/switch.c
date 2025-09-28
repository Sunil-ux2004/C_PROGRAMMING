#include<stdio.h>
int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
         printf("Munday");
        break;
        case 2:

         printf("Tuesday");
        break;

        case 3:
         printf("wednesday");
        break;

        case 4:
         printf("thursday");
        break;

        case 5:
         printf("Friday");
        break;

        case 6:
         printf("Saturday");
        break;

        case 7:
         printf("Sunday");
        break;

    default:
    printf("holyday");
        break;
    }
    return 0;
}