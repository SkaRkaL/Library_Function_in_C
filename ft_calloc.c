#include "full_library.h"

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;
	size_t toto;

	toto = count * size;
	if (count != 0 && size != toto / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
