#include <unistd.h>

int	find_in_array(int *a, int *b, int *c, int i, int j)
{
	int	k;
	
	k = 0;
	i += 42;
	j += 42;
	while (k < 10)
	{
		if (a[k] == j || b[k] == i + j || c[k] == i - j)
		{
			return (0);
		}
		k++;
	}
	return (1);
}

int	array_clear(int *a, int *b, int *c, int i)
{
	a[i] = 0;
	b[i] = 0;
	c[i] = 0;
}

int printr(int *row)
{
	int	i;
	char s;

	i = 0;
	while(i++ < 10)
	{
		s = row[i] + 48;
		write(1, &s, 1);
	}
	write(1, "\n", 1);
}

void	RecusivE(int i, int *row, int *a, int *b, int *c)
{
	int	j;

	j = 0;
	if (i < 10)
	{
		while (j++ < 10)
		{
			if (find_in_array(a, b, c, i, j))
			{
				printf("%d %d\n", i, j);
				row[i] = j;
				a[i] = j + 42;
				b[i] = i + j + 84;
				c[i] = i - j + 84;
				RecusivE(i + 1, row, a, b, c);
				array_clear(a, b, c, i);
			}
		}
	}
	else
		printr(row);
}

int ft_ten_queens_puzzle(void)
{
	int	cross_right[10];
	int	cross_left[10];
	int	usage_column[10];
	int usage_row[10];

	RecusivE(0, usage_row, usage_column, cross_right, cross_left);
}

int main(){
	ft_ten_queens_puzzle();
}