#include<stdio.h>
int main() {
    int a, b;
    printf("enter value of a:");
    scanf("%d" , &a);
    printf("enter value of b(other than zero):");
    scanf("%d" , &b);
    printf("sum is: %d\n" , a + b);
    printf("difference: %d\n" ,a-b );
    printf("product: %d\n", a*b);
    printf("quotient:%d\n" , a/b);

   
    return 0;
}