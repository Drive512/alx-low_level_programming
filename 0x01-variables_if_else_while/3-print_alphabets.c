#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Prints alphabets in lower and uppercase
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
