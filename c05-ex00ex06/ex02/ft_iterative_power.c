/* #include <stdio.h> */

int	ft_iterative_power(int nb, int power)
{
	int pow;

	pow = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		pow = pow * nb;
		power--;
	}
	return (pow);
}

/* int	main(void)
{
	int	nb = 0;
	int power = 0;
	printf("%d to the power of %d is %d", nb, power, ft_iterative_power(nb, power));
	return (0);
} */