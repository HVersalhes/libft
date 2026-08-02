#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;

	if (!dst && size == 0)
		return (ft_strlen(src));
	if (!dst || !src)
		return (0);
	dst_len =  ft_strlen(dst);
	if (dst_len >= size)
		return (ft_strlen(src) + size);
	ft_strlcpy(dst + dst_len, src, size - dst_len);
	return (ft_strlen(src) + dst_len);
}
