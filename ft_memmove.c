#include "full_library.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	const char *s;
	char *lastd;
	const char *lasts;

	s = src;
	d = dest;
	if (d == NULL && s == NULL)
		return (dest);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		lastd = d + (n - 1);
		lasts = s + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
