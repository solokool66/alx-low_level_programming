#include "main.h"
/**
*times_table - Prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int num1, card, pro;
for (num1 = 0; num1 <= 9; num1++)
{
_putchar('0');
for (card = 1; card <= 9; card++)
{
_putchar(',');
_putchar(' ');
pro = num1 * card;
if (pro <= 9)
_putchar(' ');
else
_putchar((pro / 10) + '0');
_putchar((pro % 10) + '0');
}
_putchar('\n');
}
}
