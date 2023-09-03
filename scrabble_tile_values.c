/*
 * scrabble_tile_values.c
 *
 * Prints out the tile's value on user input.
 *
 * Author: Parmenide <parmenin@andrew.cmu.edu>
 */

#include <stdio.h>

/*
 * Determine the tile's value based on user input.
 *
 * Parameters:
 * char tile: character input
 *
 * Returns:
 * An integer value corresponding to provided tile input, error message if the tile is invalid.
 */
int tile_to_points(char tile)
{
    switch (tile)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
        return 1;
        break;

    case 'D':
    case 'G':
        return 2;
        break;

    case 'B':
    case 'C':
    case 'M':
    case 'P':
        return 3;
        break;

    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
        return 4;
        break;

    case 'K':
        return 5;
        break;

    case 'J':
    case 'X':
        return 8;
        break;

    case 'Q':
    case 'Z':
        return 10;
        break;

    case '.':
        return 0;
        break;

    default:
        printf("Illegal tile: %c\n", tile);
        return -1;
        break;
    }

    return 0;
}

int main()
{
    char tile;
    printf("Enter a tile and press Enter: \n");
    scanf("%c", &tile);

    if (tile_to_points(tile) != -1)
        printf("%d\n", tile_to_points(tile));

    return 0;
}
