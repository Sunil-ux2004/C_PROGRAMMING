 #include<stdio.h>
#include<stdlib.h>
int main(){
    int chooise , n;
    while(1){
        printf("\n1. Fctorial of number:  ");
        printf("\n2. check of odd and even: ");
        printf("\n3. Area of cricle : ");
        printf("\n4. Exit ");
        printf("\n enter the number:");
        scanf("%d",&chooise);
        switch (chooise)
        {
        case  1:
              int i, p =1;
              printf("\n enter the fact number : ");
              scanf("%d ",&n);
    
              for(i =2; i<=n; i++)
                p = p*i;
               
              printf("Factorial of:  %d",p);
              break;

            case  2:
            
               printf("\n enter the odd&even : ");
               
               scanf("%d ",&n);
                if(n%2==0){
                printf("Even");
            }
            else{
                printf("Odd number");
            }
            break;

            case  3:
            float  q=3.145;
            
            printf("\n enter the are : ");
            scanf("%d",&n);
               
            printf("Area of cricle :  %f",q*n*n);
            break;

            case  4:
               exit(0);
        
        default:
        printf("\n invalid value ");
            break;
        }
    }
    return 0;

}