//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    float l, b ;
    printf("enter length of rectangle:\n ");
    scanf("%f" , &l);
    printf("enter breadth of rectangle:\n");
    scanf("%f" , &b);
    float a= l*b;
    float p= 2*(l+b);
    printf("area of rectangle = %f\n" , a);
    printf("perimeter of rectangle = %f\n", p);
    return 0;
}
