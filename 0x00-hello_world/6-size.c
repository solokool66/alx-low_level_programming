#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", (unsigned long) sizeof(char));
printf("size of an int: %i byte(s)\n", (unsigned long) sizeof(int));
printf("size of an long int: %i byte(s)\n", (unsigned long) sizeof(long int));
printf("size of an long long int: %i byte(s)\n", (unsigned long) sizeof(long long int));
printf("size of an float: %i byte(s)\n", (unsigned long) sizeof(float));
return (0);
}
