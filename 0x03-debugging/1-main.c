#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates an infinite loop.
 *              It prints a message indicating an infinite loop is coming,
 *              then initializes a variable i to 0, and finally prints
 *              a message indicating the infinite loop has been avoided.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");
    i = 0;
    /*
     * while (i < 10)
     * {
     *     putchar(i);
     * }
     */
    printf("Infinite loop avoided! \\o/\n");

    return (0);
}
