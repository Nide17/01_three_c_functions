/*
 * max.c
 *
 * Identify the highest between two numbers.
 *
 * Author: Parmenide <parmenin@andrew.cmu.edu>
 */

#include <stdio.h>

/*
 * Determine the maximum of two numbers.
 *
 * Parameters:
 * int a: first number
 * int b: second number
 *
 * Returns:
 * Max number between a and b parameters.
 */
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1 = 0, num2 = 0;

    printf("Type an integer and press Enter\n");
    scanf("%d", &num1);

    printf("Type another integer and press Enter\n");
    scanf("%d", &num2);

    printf("The higher number is %d\n", max(num1, num2));
    return 0;
}
