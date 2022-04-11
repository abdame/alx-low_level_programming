#include <stdio.h>
/**
 * main - Entery point
 *
 * * Return: Always 0 (success)
 */
int main(void)
{
char alphabet;
char calphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (calphabet = 'A'; calphabet <= 'Z'; calphabet++)
{
putchar(calphabet);
}

putchar('\n');

return (0);

}
