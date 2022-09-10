#include <stdio.h>
 
/**
 * main - prints all possible different combination 
 * of three digits
 * Return: 0 (success)
 */
int main(void)
{
	int n, m, d;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (d = 50; d < 58; d++)
			{
				if (d > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(d);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
