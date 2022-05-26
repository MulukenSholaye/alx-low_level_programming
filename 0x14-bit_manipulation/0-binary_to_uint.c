#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int az, vec = 0;

if (!b)
return (0);
for (az = 0; b[az] != '\0'; az++)
{
if (b[az] != '0' && b[az] != '1')
return (0);
if (b[a] == '1')
vec = vec * 2 + 1;
else
vec = vec * 2 + 0;
}
return (vec);
}
