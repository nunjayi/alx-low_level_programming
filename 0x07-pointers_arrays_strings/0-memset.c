#include"main.h"
/**
*_memset-fill the nbytes @s
*@s:a pointer
@c:fill memory are.
*@n:bytes value to be filled
*Return:A pointer to the filed memory area 
*/
void*_memset(void *s, int c, size_t n
{
unsigned int index; 
unsigned char *memory = s, value = c;
 for (index = 0; index < n; index++)
 memory[index] = value;
return (memory);
}
