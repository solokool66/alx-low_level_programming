#include <unistd.h>

/**
  *_putchar - writes the character c to the stdout
  *@c: The character to print out
  *Return: On success 1
  *on error, -1 is returned
  */

int _putchar(char c)
{
return (write(1, &c, 1));
}
