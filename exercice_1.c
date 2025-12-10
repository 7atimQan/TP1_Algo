#include <stdio.h>

int	ft_factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * ft_factorial(n - 1));
}

int	main(void)
{
	int	n = 5;
	printf("Factorielle de %d = %d\n", n, ft_factorial(n));
	return (0);
}