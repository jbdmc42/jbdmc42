//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	int	nb = 5;
	int power = 10;
	printf("%d to the power of %d is %d", nb, power, ft_recursive_power(nb, power));
	return (0);
}*/