int	ft_is_palindrome(char *str, int start, int end)
{
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	return (ft_is_palindrome(str, start + 1, end - 1));
}

int	main(void)
{
	char *word = "kayak";
	int len = strlen(word);

	if (ft_is_palindrome(word, 0, len - 1))
		printf("%s est un palindrome.\n", word);
	else
		printf("%s n'est pas un palindrome.\n", word);
	return (0);
}