// C program to compute the perimeter and area of a circle with a given radius.
#include<stdio.h>
#include<math.h>
int main()
{
int radious = 6;
float perimeter,Area;
perimeter = 2* 3.14*radious;
Area=3.14*radious*radious;
printf("Perimeter of the Circle = %f inches\n",perimeter);
printf("Area of the Circle = %f square inches\n",Area);
return 0;
}