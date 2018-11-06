#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	if (!(str = (char*)malloc(sizeof(str) * i)))
		return (0);
	i = 0;
	while (src[i])
		str[i] = src[i++];
	str[i] = '\0';
	return (str);
}
