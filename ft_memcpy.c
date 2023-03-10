#include "full_library.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;

	s = src;
	d = dest;
	if (dest == src)
		return (dest);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
