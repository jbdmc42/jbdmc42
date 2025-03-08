//#include <stdio.h>

int	cal_res(char *str, int res, int i)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = str[i] - '0' + res * 10;
		i++;
	}
	return (res);
}

int	cal_val(int val, int mc)
{
	if (mc == 0 || (mc % 2) == 0)
	{
		val = 1;
		return (val);
	}
	val = -1;
	return (val);
}

int	cal_mc(char *str, int i, int *mc)
{
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			(*mc)++;
		i++;
	}
	return (i);
}

int	skip_space(char *str, int i)
{
	while (str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	val;
	int	res;
	int	mc;

	i = 0;
	val = 1;
	res = 0;
	mc = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-'
			|| str[i] == '+' || str[i] == ' ')
		{
			i = skip_space(str, i);
			i = cal_mc(str, i, &mc);
			val = cal_val(val, mc);
			res = cal_res(str, res, i);
			return (res * val);
		}
		i++;
	}
	return (0);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
		return (0);
	}
	return (0);
}*/