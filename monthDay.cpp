#include<stdio.h>

int main(void){
    int year; int month;
    printf("Type a year: ");
    scanf("%i", &year);
    printf("Type a month: ");
    scanf("%i", &month);

    if(month<1 || month>12){
        printf("Month not available! Type another: ");
        scanf("%i", &month);
    }

    if(year%4==0 && month==2){
        printf("It's a leap year!\nSo... February has 29 days.");
    }else{
        printf("It's a normal year!\n");
        if(month==2){
            printf("So... February has 28 days.");
        }else if(month==4||month==6||month==9||month==11){
            printf("So... This month has 30 days.");
        }else{
            printf("So... this month has 31 days.");
        }
    }
}
