#include<stdio.h>
void grad();

int main(){
    grad();
    return 0;
}

void grad(){
    int mark;
    printf("Enter a marks: ");
    scanf("%d",&mark);

    switch (mark)
    {
    case 1:
        if(mark>=90&&mark<=100)
          printf("\n Grade A");
        break;

    case 2:
        if(mark>=80&&mark<=90)
          printf("\n Grade B");
        break;
        
    case 3:
        if(mark>=70&&mark<=80)
          printf("\n Grade C");
        break;

    case 4:
        if(mark>=60&&mark<=70)
          printf("\n Grade D");
        break;


    case 5:
        if(mark>=50&&mark<=60)
          printf("\n Grade E");
        break;
    
    case 6:
        if(mark<=50)
          printf("\n Grade F");
        break;
    default:
    printf("\n not value");
        break;
    }
}