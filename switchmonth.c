#include<stdio.h>
int main(){
    int month, year;
    printf("enter year:\n");
    scanf("%d" , &year);
    printf("enter any number 1-12 for month:\n");
    scanf("%d" , &month);
    switch(month){
        case 1: printf("january, 31 days");
                break;
        case 2: if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("February, 29 days (Leap Year)\n");
                else
                printf("February, 28 days\n");
                break;
        case 3: printf("march, 31 days");
                break;
        case 4: printf("april, 30 days");
                break;
        case 5: printf("may, 31 days");
                break;
        case 6: printf("june, 30 days");
                break;
        case 7: printf("july, 31 days");
                break;
        case 8: printf("august, 31 days");
                break;
        case 9: printf("september, 30 days");
                break;
        case 10: printf("october, 31 days");
                break;
        case 11: printf("november, 30 days");
                break; 
        case 12: printf("december, 31 days");
                break; 
        default: printf("invalid input");                                                                            
    }
    return 0;
}