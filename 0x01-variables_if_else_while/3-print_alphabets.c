#include <stdio.h>
/**
*main - Prints alphabet in lowercase and uppercase
*Return: Always 0
*/
int main(void)
{
char ab, bc;
for (ab = 'a'; ab <= 'z'; ab++)
{
putchar(ab);
}
for (bc = 'A'; bc <= 'Z'; bc++)
{
putchar(bc);
putchar(' ');
}
return (0);
}

