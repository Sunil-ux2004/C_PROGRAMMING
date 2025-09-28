// write a program to print the n terms  natural number reverse order.

#include <stdio.h>
int main() {
    int n;
    printf("Entre the number: ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}
