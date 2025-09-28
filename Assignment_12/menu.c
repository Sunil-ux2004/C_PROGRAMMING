// write a menu driven program with the following option

// 1. check whether a given set of three number are lenghts of an isoscelse

// check whether a given set of three number are lenghts of sidees of a right angled tringle or not.
// check whether a given set of three are equilteral traingle or not .
// exit

#include<stdio.h>
#include<stdlib.h>
void menu();

int main(){
    menu();
    printf("\n");
    return 0;

}

void menu(){
    int choice,a,b,c;
    while(1){
    
    printf("\n1. check isosceles traingle: ");
    printf("\n2. check the right angle triangle: ");
    printf("\n3. check equilateral triangle: ");
    printf("\n4. exit: ");

    printf("\n.enter the number: ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the side of triangle: ");
        scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && b+c>a && a+c>b)
    if(a==b || b==c || c==a)
        printf("\n it is isosceles triangle");
    else
         printf("\n it is not isosceles traingle");
    else
        printf("\n not a vaid triangle");
        break;

    case 2:
       printf("Enter the side of triangle: ");
       scanf("%d %d %d",&a,&b,&c);
     if(a+b>c && b+c>a && a+c>b)
     if(a*a+b*b==c || b*b+c*c==a || a*a+c*c==b)
         printf("\n it is right angle traingle");
    else
      printf("\n not right angle traingle");
     else
       printf("\n not a valid traingle ");
       break;

    case 3:
       printf("\n Enter the side of triangle: ");
       scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    if(a==b&&b==c)
       printf("\n it eqilteral taringle:");
    else
      printf("\n. it is not eqilteral taringle: ");
    else
      printf("\n not a valid traingle: ");
      break;

    case 4:
    exit(0);
    default:
      printf("invalid number");
        break;
    }
}
}