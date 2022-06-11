//C program that accepts two integers from the user and calculate the product of the two integers.
#include <stdio.h>
int main()
{
    int number1, number2, result;
    printf("Input the first integer: ");
    scanf("%d", &number1);
    printf("Input the second integer: ");
    scanf("%d", &number2);
    result = number1 * number2;
    printf("Product of the above two integers = %d\n", result);
    return 0;
}
