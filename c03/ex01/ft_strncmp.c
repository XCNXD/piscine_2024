int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(int argc, char **argv)
// {
// 	printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// }