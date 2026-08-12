//write a program to convert temperature from celsius to fahrenheit.
#include<stdio.h>
int main(){
    float t, f;
    printf("enter temperature in celsius:\n");
    scanf("%f" , &t);
    f = (t*9/5)+32;
    printf("tempertaure in fahrenheit:%f \n" , f);

    return 0;
}