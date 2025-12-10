#include <stdio.h>

int	ft_belongs(int *tab, int size, int x)
{
	if (size == 0)
		return (0);
	if (*tab == x)
		return (1);
	return (ft_belongs(tab + 1, size - 1, x));
}

int	ft_binary_search(int *tab, int x, int start, int end)
{
	int	mid;

	if (start > end)
		return (0);
	mid = start + (end - start) / 2;
	if (tab[mid] == x)
		return (1);
	if (tab[mid] > x)
		return (ft_binary_search(tab, x, start, mid - 1));
	return (ft_binary_search(tab, x, mid + 1, end));
}

int	main(void)
{
	int	sorted[] = {10, 20, 30, 40, 50};

	printf("Existe (Linear) ? %d\n", ft_belongs(sorted, 5, 30));
	printf("Existe (Binary) ? %d\n", ft_binary_search(sorted, 99, 0, 4));
	return (0);
}