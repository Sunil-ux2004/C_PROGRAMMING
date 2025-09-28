//          *
//        * *
 //    * *  *
//   * * *  *
//*  * * *  *

#include<stdio.h>
void par();
int main(){
    par();
    return 0;
}
void par(){
    int i,j;
    for(i= 1; i<=5; i++){
        for(j=1; j<=5; j++){
            if(j<=6-i)
              printf(" * ");

              else
                printf(" ");


        }
        printf("\n");
    }
    
}