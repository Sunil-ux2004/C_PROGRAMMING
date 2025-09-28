// write a program which the month as an input and dispaly number of days in that month.

#include<stdio.h>
int main(){
    int month;
    printf("Enter the month: ");
    scanf("%d",& month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7: 
    case 8:
    case 10:
        printf("31 days of month");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
         printf("30 Days of month");
          break;

    case 2:
        printf("28 or 29 Days of month");
        break;
    default:
    printf("invalid number");
        break;
    }
    printf("\n");
    return 0;

}