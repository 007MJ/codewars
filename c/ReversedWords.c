#include <stdio.h>

int	ft_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i])
  {
	i++;
  }
  return (i);
}

char	*reverse_words(const char *words, size_t length, char *reversed)
{
	int	i;
	int	cp;

	i = 0;
	cp = i;
	while (length)
	{
		while (words[length] == ' ')
		{
			i++;
			cp = i;
		}
		while (cp >= 0)
		{
			
		}
	}
	*reversed = '\0';
	return (reversed);
}
void rev_printf(const char *str)
{
	int	len;
	len = ft_strlen(str);
	while (len >= 0)
	{
		printf("%c",str[len]);
		len--;
	}
}

int	main(void)
{
	// char	*string = "ABC DEF";
	// char	reversed[ft_strlen(string)];
	// printf("%s", reverse_words(string, ft_strlen(string),reversed));
	rev_printf("bonjour");
	printf("%d", ft_strlen("bonjour"));
}
