// print the table.
#include<stdio.h>
int main(){
     int i =1,x ,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=10){
       x= n*i;
        printf(" %d\n",x);
        i++;
        
    }
    return 0;
}