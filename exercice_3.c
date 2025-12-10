#include <stdio.h>

int	ft_find_max_idx(int *tab, int size, int i, int current_max_idx)
{
	if (i == size)
		return (current_max_idx);
	if (tab[i] > tab[current_max_idx])
		current_max_idx = i;
	return (ft_find_max_idx(tab, size, i + 1, current_max_idx));
}

int	ft_count_occurrences(int *tab, int size, int val)
{
	if (size == 0)
		return (0);
	if (*tab == val)
		return (1 + ft_count_occurrences(tab + 1, size - 1, val));
	else
		return (ft_count_occurrences(tab + 1, size - 1, val));
}

int	main(void)
{
	int	tab[] = {2, 1, 5, 5, 3};
	int	size = 5;

	printf("Index du max : %d\n", ft_find_max_idx(tab, size, 0, 0)); 
	printf("Occurrences de 5 : %d\n", ft_count_occurrences(tab, size, 5));
	return (0);
}