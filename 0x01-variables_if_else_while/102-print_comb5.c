#include <stdio.h>
/**
 * main - Entery point
 *
 * * Return: Always 0 (success)
 */
int main(void)
{
int digit11, digit12;

for (digit11 = 0; digit11 <= 98; digit11++)
{
for (digit12 = digit11 + 1; digit12 <= 99; digit12++)
{
putchar((digit11 / 10) + '0');
putchar((digit11 % 10) + '0');
putchar(' ');
putchar((digit12 / 10) + '0');
putchar((digit12 % 10) + '0');

if (digit11 == 98 && digit12 == 99)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);

}
