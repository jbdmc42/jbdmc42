#include <stdio.h>
/* #include <stdlib.h> */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%s", ft_strdup(argv[1]));
	}
	return (0);
} */