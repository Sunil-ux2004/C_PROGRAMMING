#include <stdio.h>

int main() {
    int day;

    printf("Enter day number (1 for Monday, 7 for Sunday): ");
    scanf("%d", &day);

    if(day == 6) {
        printf("It's Saturday - Weekend!\n");
    }
    else if(day == 7) {
        printf("It's Sunday - Weekend!\n");
    }
    else {
        printf("It's a Weekday.\n");
    }

    return 0;
}
