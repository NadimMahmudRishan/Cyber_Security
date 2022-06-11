/*C program that accepts two integers from the user 
and calculate the sum of the two integers.*/
#include <stdio.h>
int main()
{
    int numner1, number2, sum;
    printf("Input the first integer: ");
    scanf("%d", &numner1);
    printf("Input the second integer: ");
    scanf("%d", &number2);
    sum = numner1 + number2;
    printf("Sum of the above two integers = %d\n", sum);
    return 0;
}
