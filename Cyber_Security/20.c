/*C program to print the roots of Bhaskara’s formula from the given 
three floating numbers. Display a message if it is not possible to find the roots.*/
#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,r,root1,root2;
printf("Input the first number(a): ");
scanf("%lf", &a);
printf("Input the second number(b): ");
scanf("%lf", &b);
printf("Input the third number(c): ");
scanf("%lf", &c);
r=sqrt(b*b-4*a*c);
if (r<0)
{
    printf("It is not possible\n");
}
else
{
    root1=(-b+r)/(2*a);
    root2=(-b-r)/(2*a);
    printf("Root1 = %.5lf\n",root1);
    printf("Root2 = %.5lf\n",root2);
}
return 0;
}