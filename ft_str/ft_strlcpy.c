#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (!src)
		return (0);
	if (!dst && size == 0)
		return (ft_strlen(src));
	if (!dst)
		return (0);
	len = 0;
	if (size > 0)
	{
		while (src[len] && len < size - 1)
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (ft_strlen(src));
}
