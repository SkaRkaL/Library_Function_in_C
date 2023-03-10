#include "full_library.h"

int ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char *a1;
	unsigned char *a2;

	a1 = (unsigned char *)b1;
	a2 = (unsigned char *)b2;
	while (len)
	{
		if (*a1 != *a2)
			return (*a1 - *a2);
		a1++;
		a2++;
		len--;
	}
	return (0);
}
