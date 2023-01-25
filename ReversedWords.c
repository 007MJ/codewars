#include <stdio.h>

int	ft_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i])
  	i++;
  return (i);
}

char *reverse_words (const char *words, size_t length, char *reversed)
{
	int	copy;
	int	j;

	copy = 0;
	while(words[length])
	{
		if(words[length] == ' ')
			copy = length;
		while(words[copy] != ' ' || words[copy] ='\0')
		{
			reversed[j] = words[copy];
			j++;
			copy--;
		}
		lenght--;
	}
	*reversed = '\0';
	return reversed;
}
int main(void)
{
	char	*reversed;
	reversed = "hello world";
	printf("%s", reverse_words("bonjour SALUT!", reversed));
}
