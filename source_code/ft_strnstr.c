	#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	// Si la subcadena está vacía, devolvemos el puntero al inicio de la cadena principal
	if (*needle == '\0')
		return ((char *)haystack);

	// Obtenemos la longitud de la subcadena
	needle_len = ft_strlen(needle);

	// Iteramos sobre la cadena principal hasta el límite de longitud
	while (*haystack && len >= needle_len)
	{
		// Si encontramos una coincidencia parcial
		if (*haystack == *needle && ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);

		haystack++;
		len--;
	}

	return (NULL);
}
