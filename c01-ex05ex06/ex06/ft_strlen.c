/* #include <stdio.h> */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

/* int	main(void)
{
	char *str;

	str = "Hello World!";
	printf("%d", ft_strlen(str));
	return (0);
} */