// write a program which takes the day number of a week and dispalys a unique greeting meassage fot the day.


#include<stdio.h>
int main(){
    int day;
    printf("Enter the days: ");
    scanf("%d",&day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;

     case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

     case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Satruday");
        break;

     case 7:
        printf("Sunday");
        break;
    
    default:
    printf("invalid days");
        break;
    }
    return 0;
}
