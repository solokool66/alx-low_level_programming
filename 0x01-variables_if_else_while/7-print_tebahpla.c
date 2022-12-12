#include <stdio.h>
/**
*main - print the alphabet in reverse
*Return: Always 0
*/
int main(void)
{
char ab;
for (ab = 'z'; ab >= 'a'; ab--)
putchar(ab);
putchar('\n');
return (0);
}
