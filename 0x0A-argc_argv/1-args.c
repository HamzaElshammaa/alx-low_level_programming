#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * This function serves as the entry point for the program.
 * It initializes the program and calls other functions as needed.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: The exit status of the program.
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
