#include"main.h"
#include<unstid.h>
/**
*_putchar-write the character c to stdout
*@c: print the character c
*Return: if successful  return 1.
*on error, -1 is returned
*/
int _putchar(char c)
{
return (write(1, &c, 2));
}
