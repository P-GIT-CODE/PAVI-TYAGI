//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include <stdio.h>
int main(){
    float a,b,c;
    printf("enter first side of triangle:\n");
    scanf("%f" , &a);
    printf("enter second side of triangle:\n");
    scanf("%f" , &b);
    printf("enter third side of triangle:\n");
    scanf("%f" , &c);
    if(a==b && b==c && c==a){
        printf("triangle is equilateral\n");
    }
    else if(a==b || b==c || c==a ){
        printf("triangle is isosceles\n");
    }
    else if(a!=b && b!=c && c!=a){
        printf("triangle is scalene");
    }

    return 0;
}