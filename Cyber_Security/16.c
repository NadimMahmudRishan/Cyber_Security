/*C program to read an amount (integer value) and break 
the amount into smallest possible number of bank notes.*/
#include<stdio.h>
int main()
{
int amount,note100,note50,note20,note10,note5,note2,note1,carry1,carry2;
printf("Input the amount: ");
scanf("%d",&amount);

printf("%d Note(s) of 100.00\n",amount/100);
carry1=amount%100;
printf("%d Note(s) of 50.00\n",carry1/50);
carry2=carry1%50;
printf("%d Note(s) of 20.00\n",carry2/20);
carry1=carry2%20;
printf("%d Note(s) of 10.00\n",carry1/10);
carry2=carry1%10;
printf("%d Note(s) of 5.00\n",carry2/5);
carry1=carry2%5;
printf("%d Note(s) of 2.00\n",carry1/2);
carry2=carry1%2;
printf("%d Note(s) of 1.00\n",carry2);

return 0;
}