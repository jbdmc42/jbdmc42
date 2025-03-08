/* #include <stdio.h> */

int	ft_is_prime(int nb)
{
	int	n;

	n = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb % 2) == 0)
		return (0);
	while ((n * n) <= nb)
	{
		if ((nb % n) == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
}

/* int	cal_res(char *str, int res, int i)
{
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			i++;
		if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			res = cal_res(str, res, i);
			return (res * -1);
		}
		if ((str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9')) ||
			(str[i] >= '0' && str[i] <= '9'))
		{
			res = cal_res(str, res, i);
			return (res);
		}
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			printf("ATOI: %d\n", ft_atoi(argv[i]));
			printf("NEXT_PRIME: %d\n\n", ft_find_next_prime(ft_atoi(argv[i])));
			i++;
		}
	}
	return (0);
} */