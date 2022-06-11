/* C program that accepts two item’s weight (floating points' values ) and
 number of purchase (floating points' values) and calculate the average value of the items.*/
#include <stdio.h>
int main()
{
    float item1, item2,Weight1,Weight2, avg;
    printf("Weight - Item1: ");
    scanf("%f", &Weight1);
    printf("No. of item1: ");
    scanf("%f", &item1);
    printf("Weight - Item2: ");
    scanf("%f", &Weight2);
    printf("No. of item2: ");
    scanf("%f", &item2);
    // calculate the average value of the items.
    avg = (Weight1*item1+Weight2*item2)/(item1+item2);
    printf("Average Value = %f",avg);
    return 0;
}