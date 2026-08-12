// write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter first number:\n");
    scanf("%d" , &a);
    printf("enter second number: \n");
    scanf("%d" , &b);
    printf("original number:a=%d , b=%d \n" , a,b);
    c = a;
    a=b;
    b=c;
    printf("after swaping : a=%d, b=%d \n" , a,b);
    return 0;

}


    
    