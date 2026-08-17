//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main() {
    float num1, num2, num3;

    
    printf("Enter three numbers: ");

    // Validate input
    if (scanf("%f %f %f", &num1, &num2, &num3) != 3) {
        printf("Invalid input. Please enter numeric values only.\n");
        return 1; // Exit with error
    }

   
    if (num1 >= num2 && num1 >= num3) {
        if (num1 == num2 && num1 == num3) {
            printf("All three numbers are equal: %f\n", num1);
        } else {
            printf("The largest number is: %f\n", num1);
        }
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %f\n", num2);
    }
    else {
        printf("The largest number is: %f\n", num3);
    }

    return 0;
}
