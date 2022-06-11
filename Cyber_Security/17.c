// C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{
int in_sec,hour,minute,sec;
printf("Input seconds: ");
scanf("%d",&in_sec);
printf("There are:\n");
hour=in_sec/3600;
minute=(in_sec-hour*3600)/60;
sec = (in_sec - (hour * 3600)-(minute*60));
printf("H:M:S - %d:%d:%d\n",hour,minute,sec);
return 0;
}