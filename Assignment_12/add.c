// write a program to print the drive program with file following opotion.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,a,b;
    while(1){
        printf("\n1. Addition");
        printf("\n2. Substraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit ");
        printf("\n enter the number:");
        scanf("%d",&x);
        switch (x)
        {
        case  1:
            printf("\n enter the number: ");
            scanf("%d %d",&a,&b);
            printf("Sum of %d",a+b);
            break;

            case  2:
            printf("\n enter the number: ");
            scanf("%d %d",&a,&b);
            printf("Difference %d",a-b);
            break;

            case  3:
            printf("\n enter the number: ");
            scanf("%d %d",&a,&b);
            printf("Product of:  %d",a*b);
            break;

            case  4:
            printf("\n enter the number: ");
            scanf("%d %d",&a,&b);
            printf("Divisible of  %d",a/b);
            break;

            case  5:
               exit(0);
            
        
        default:
        printf("\n invalid value ");
            break;
        }
    }
    return 0;

}