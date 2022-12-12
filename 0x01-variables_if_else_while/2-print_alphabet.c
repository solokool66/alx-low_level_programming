#include <stdio.h>
/**
*main - Prints all alphabet in lower case
*Return: Always 0
*/
char main(void)
{
char az;
for (az = 'a'; az <= 'z'; az++)
{
putchar(az);
}
putchar('\n');
return (0);
}
