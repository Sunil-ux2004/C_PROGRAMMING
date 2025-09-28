#include<stdio.h>
void par();
int main(){
    par();
    return 0;
}
void par(){
    int i,j ,k;
    for(i= 1; i<=5; i++){
        k=i;
        for(j=1; j<=5; j++){
            if(j<=i){
              printf(" %d ",k);
              k--;
            }
              else
                printf(" ");


        }
        printf("\n");
    }
    
}