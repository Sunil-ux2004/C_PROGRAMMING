#include<stdio.h>
#include<stdlib.h>
int main(){
    int chooise;
    while (1)
    {
        printf("\n.1calculate the lcm of two number: ");
        printf("\n.2 calculate sum of digit number: ");
        printf("\n.3 volume of cubiod: ");
        printf("\n.4 check whether given number prime of not: ");
        printf("\n.5 exit: ");
        printf("Enter the number: ");
        scanf("%d",&chooise);

        switch (chooise)
        {
        case 1:
           int a,b,l;
           printf("Enter the first number: ");
           scanf("%d",&a);

           printf("Enter the second number: ");
           scanf("%d",&b);
            for(l=a>b?a:b;l<=a*b; l++){
        if(l%a==0&&l%b==0){
             printf("Lcm of: %d",l);
             break;

        }

    }
        case 2:
          int n, count=0;
          printf("Enter the number: ");
          scanf("%d",&n);
          while (n)
          {
            n=n/10;
            count++;
          }
          printf("Digit of %d",count);       
            break;
        case 3:
            int x;
            printf("Enter the coubiod value: ");
            scanf("%d",&x);

            printf("Volume of cubiod: %d",x*x*x);
            break;

        case 4:
            int y,i;
            printf("Enter the number: ");
            scanf("%d",&y);

            for(i=2; i<=y-1; i++)
             if(y%i==0)
             break;
              if(i==y)
               printf("Prime ");
            else
            printf("Not prime");
            break;

        case 5:
        exit(0);
        break;

        default:
        printf("Invalid value: ");
            break;
        }
      }
      return 0;
    
}