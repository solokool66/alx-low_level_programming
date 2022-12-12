#include <stdio.h>
/**
*main - prints alphabet in lower case
*Return: ALways 0
*/
int main(void)
{
char ab;
for (ab = 'a'; ab <= 'z'; ab++)
{
if (ab != 'e' && ab != 'q')
putchar(ab);
}
putchar('\n');
return (0);
}
