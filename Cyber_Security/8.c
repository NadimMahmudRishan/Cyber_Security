// C program to convert specified days into years, weeks and days.
#include <stdio.h>
int main()
{
    int i_day, day, week, year, carry;
    i_day = 1329;
    year = i_day / 365;
    carry = i_day % 365;
    week = carry / 7;
    day = carry % 7;
    printf("Years: %d\nWeeks: %d\nDays: %d\n",year,week,day);
    return 0;
}