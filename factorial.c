//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n , i , factorial=1;
    printf("enter n:\n");
    scanf("%d", &n , i++);
    for(i=1; n>=i; i++) {
        factorial= factorial*i;
        
    }
    printf("factorial=%d" , factorial);
    return 0;
}