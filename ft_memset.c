#include "full_library.h"

void *ft_memset(void *b, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		*((char *)b + i++) = c; /* |-> 23:  explicit | implicit */
	return (b);
}
