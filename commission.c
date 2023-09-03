/*
 * commission.c
 *
 * Prints out the salesperson's commission based on the number bicycles sold.
 *
 * Author: Parmenide <parmenin@andrew.cmu.edu>
 */

#include <stdio.h>

/*
 * Calculates the amount of commission for the salesperson.
 *
 * Parameters:
 * int bicycles: integer number of bicycles sold.
 *
 * Returns:
 * An integer value of the commission earned by a salesperson given the number of bicycles sold.
 */
int commission_value(int bicy)
{
    if (bicy < 0)
    {
        return -1;
    }
    else if (bicy >= 0 && bicy <= 3)
    {
        return 0;
    }
    else if (bicy >= 4 && bicy <= 10)
    {
        return bicy * 50;
    }
    else
    {
        if (bicy >= 21)
        {
            return (10 * 50) + ((bicy - 10) * 75) + 150;
        }
        else
        {
            return (10 * 50) + ((bicy - 10) * 75);
        }
    }
}

int main()
{
    int bicycles;
    printf("Enter the number of bicycles and press Enter: \n");
    scanf("%d", &bicycles);

    if (bicycles >= 0 && commission_value(bicycles) >= 0)
        printf("You earned a commission of $%d\n", commission_value(bicycles));
    else
        printf("You provided an invalid number of bicycles!\n");

    return 0;
}
