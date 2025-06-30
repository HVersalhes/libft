#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);

	if (dst_len > dstsize)
		return (src_len + dst_len);
	len = 0;
	if (dstsize > 0)
	{
		while (src[len] && dst_len + len < dstsize -1)
		{
			dst[dst_len + len] = src[len];
			len++;
		}
		dst[dst_len + len] = '\0';
	}
	return (src_len + dst_len);
}
