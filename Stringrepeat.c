#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*repeat_str(size_t count, const char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc((count * ft_strlen(src)) * sizeof(char) + 1);
	while (count > 0)
	{
		i = 0;
		while (src[i])
		{
			str[j] = src[i];
			i++;
			j++;
		}
		count--;
	}
	str[j] ='\0';
  return (str);
}
