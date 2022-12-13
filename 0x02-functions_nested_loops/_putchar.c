#include <unistd.h>
#include <main.h>
/**
*_putchar - Prints the character c to stdout
*@c: the character to print
*Return: On success 1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
