#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

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
if (argc < 3 || argc > 3)
{
printf("%s\n", "Error");
return (1);
}
else
{
int a, b, mul;

a = _atoi(argv[1]);
b = _atoi(argv[2]);
mul = a *b;
printf("%d\n", mul);
}
return (0);
}
