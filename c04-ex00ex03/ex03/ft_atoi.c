/* #include <stdio.h> */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	val;

	i = 0;
	res = 0;
	val = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			val = -val;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (res * val);
}

/* int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
} */