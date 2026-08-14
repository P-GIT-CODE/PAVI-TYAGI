//write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
   float p, n, r, si, ci;
   printf("Enter principal amount (P): ");
   scanf("%f", &p);
   printf("Enter time in years (n): ");
   scanf("%f", &n);
   printf("Enter rate of interest (r): ");
   scanf("%f", &r);
   
   si = (p * n * r) / 100;
   
   ci = p * (pow((1 + r / 100), n) - 1);
   
   printf("Simple Interest = %.2f\n", si);
   printf("Compound Interest = %.2f\n", ci);
   return 0;
}