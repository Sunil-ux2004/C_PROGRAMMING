#include<stdio.h>
void par();
int main(){
    par();
    return 0;
}
void par(){
    int i,j;
    char k;
    for(i= 1; i<=5; i++){
        k= 'A';
        for(j=1; j<=5; j++){
            if(j>=i){
              printf("%c",64+j);
              k++;
            }

              else
                printf(" ");


        }
        printf("\n");
    }
    
}