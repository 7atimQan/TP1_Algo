#include <stdio.h>

void	ft_print_array(int *tab, int size)
{
	if (size <= 0)
		return ;
	printf("%d\n", *tab);
	ft_print_array(tab + 1, size - 1);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	ft_print_array(arr, 5);
	return (0);
}