// C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
#include <stdio.h>
int main()
{
    int height = 7, width = 5, Perimeter, Area;
    Perimeter = 2 * (height + width);
    Area = height * width;
    printf("Perimeter of the rectangle = %d inches\n", Perimeter);
    printf("Area of the rectangle = %d square inches\n", Area);
    return 0;
}