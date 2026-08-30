//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main()
{
    int n, i, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i * i <= n; i++)
    {
        if(i * i == n)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Perfect Square");
    else
        printf("Not a Perfect Square");

    return 0;
}