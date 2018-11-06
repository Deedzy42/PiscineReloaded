#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *str;

	i = 0;
	while (i < (max - min))
		i++;
	if (!(str = (int*)malloc(sizeof(str) * i)))
		return (0);
	i = 0;
	while (min < max)
		str[i++] = min++;
	return (str);
}
