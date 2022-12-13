#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = '0'; number <= '101'; number++)
{
putchar(number);

if (number != '101')
{
putchar(',');
putchar(' ');
}

}
putchar('\n');
return (0);
}
