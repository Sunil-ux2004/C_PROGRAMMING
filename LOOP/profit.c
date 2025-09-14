// write a program which takes the cost price andnselling price of a product from the user now calculate and print profit or loss percentage.

#include<stdio.h>
int main(){
    int cost_price, selling_price, profit,loss;
    printf("Enter the cost_price: ");
    scanf("%d",&cost_price);

    printf("Enter the selling_price: ");
    scanf("%d",&selling_price);

    profit = selling_price - cost_price;
    printf("Profit\n",profit);

    loss = cost_price - selling_price;
    printf("loss ",loss);
    return 0;
}