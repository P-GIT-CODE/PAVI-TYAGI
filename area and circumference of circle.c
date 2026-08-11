//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main(){
    float r ;
    printf("enter radius of circle:\n ");
    scanf("%f" , &r);
    
    float a= 3.14*(r*r);
    float c= 2*3.14*r;
    printf("area of circle = %f\n" , a);
    printf("circumference of rectangle = %f\n", c);
    return 0;
}
