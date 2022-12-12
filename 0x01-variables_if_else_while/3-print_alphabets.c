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
putchar('\n');
for (bc = 'A'; bc <= 'Z'; bc++)
{
putchar(bc);
}
return (0);
}

