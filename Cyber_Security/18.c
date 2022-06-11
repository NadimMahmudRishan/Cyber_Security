/* C program to convert a given integer (in days) to years,
 months and days, assumes that all months have 30 days and all years have 365 days.*/
#include <stdio.h>
int main()
{
    int in_day, year, month, day;
    printf("Input no. of days: ");
    scanf("%d", &in_day);
    year = in_day / 365;
    month = (in_day - (year * 365)) / 30;
    day = (in_day - (year * 365)-(month*30));
    printf("%d Year(s)\n",year);
    printf("%d Month(s)\n",month);
    printf("%d Day(s)\n",day);
    return 0;
}