// C program to calculate the distance between the two points.
#include <stdio.h>
#include <math.h>
int main()
{
    int x1, x2, y1, y2;
    printf("Input x1: ");
    scanf("%d", &x1);
    printf("Input y1: ");
    scanf("%d", &y1);
    printf("Input x2: ");
    scanf("%d", &x2);
    printf("Input y2: ");
    scanf("%d", &y2);
    printf("Distance between the said points: %.4f\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    return 0;
}