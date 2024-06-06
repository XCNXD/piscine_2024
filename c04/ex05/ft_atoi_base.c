int    get_base_length(char *base)
{
    int    i;
    int    j;

    i = 0;
    while (base[i])
    {
        j = 0;
        while (base[j])
        {
            if (base[i] == base[j] && i != j)
                return (0);
            j++;
        }
        if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
            || base[i] == '\r' || base[i] == '\t' || base[i] == '\v'
            || base[i] == '-' || base[i] == '+')
            return (0);
        i++;
    }
    return (i);
}

int    get_number_from_base(char str, char *base)
{
    int    idx;

    idx = 0;
    while (base[idx])
    {
        if (str == base[idx])
            return (idx);
        idx++;
    }
    return (-1);
}

int    ft_atoi_base_search(char *str, int *idx)
{
    int    mult;

    mult = 1;
    while (str[*idx] == ' ' || str[*idx] == '\f' || str[*idx] == '\n'
        || str[*idx] == '\r' || str[*idx] == '\t' || str[*idx] == '\v')
        *idx += 1;
    while (str[*idx] == '-' || str[*idx] == '+')
    {
        if (str[*idx] == '-')
            mult *= -1;
        *idx += 1;
    }
    return (mult);
}

int    ft_atoi_base(char *str, char *base)
{
    int        idx;
    int        sum;
    int        mult;
    int        digit;
    int        n_base;

    idx = 0;
    sum = 0;
    n_base = get_base_length(base);
    if (n_base >= 2)
    {
        mult = ft_atoi_base_search(str, &idx);
        digit = get_number_from_base(str[idx], base);
        while (digit != -1)
        {
            sum = (sum * n_base) + digit;
            idx++;
            digit = get_number_from_base(str[idx], base);
        }
        return (sum *= mult);
    }
    return (0);
}

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != 0)
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// int	check_base_error(char *base)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	j = 0;
// 	k = ft_strlen(base);
// 	if (base[0] == 0 || base[1] == 0)
// 		return (0);
// 	while (base[i] != 0)
// 	{
// 		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
// 			return (0);
// 		j = i + 1;
// 		while (j < k)
// 		{
// 			if (base[i] == base[j])
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (i);
// }

// int	to_base(char str, char *base)
// {
// 	int	i;

// 	i = 0;
// 	while (base[i] != '\0')
// 	{
// 		if (str == base[i])
// 			return (i);
// 		i++;
// 	}
// 	return (-1);
// }

// int	str_to_hex_exp(char *str, char *base)
// {
// 	int	i;
// 	int	sum;
// 	int	base_len;

// 	i = 0;
// 	sum = 0;
// 	base_len = ft_strlen(base);
// 	while (str[i] != 0)
// 	{
// 		sum *= base_len;
// 		sum += to_base(str[i], base);
// 		i++;
// 	}
// 	return (sum);
// }

// int	ft_atoi_base(char *str, char *base)
// {
// 	int	i;
// 	int	sign;
// 	int	num;

// 	sign = 1;
// 	i = 0;
// 	if (check_base_error(base) >= 2)
// 	{
// 		while (str[i] <= ' ')
// 			i++;
// 		while (str[i] == '+' || str[i] == '-')
// 		{
// 			if (str[i] == '-')
// 			{
// 				sign *= -1;
// 			}
// 			i++;
// 		}
// 		num = str_to_hex_exp(str + i, base);
// 		return (num * sign);
// 	}
// 	return (0);
// }
// #include <stdio.h>

// int ft_atoi_base(char *str, char *base);

// int main() {
//     // Test Case 1: Valid input, base 10
//     char *str1 = "12345";
//     char *base1 = "0123456789";
//     printf("Test Case 1: %d\n", ft_atoi_base(str1, base1)); // Expected output: 12345

//     // Test Case 2: Valid input, base 2 (binary)
//     char *str2 = "101010";
//     char *base2 = "01";
//     printf("Test Case 2: %d\n", ft_atoi_base(str2, base2)); // Expected output: 42

//     // Test Case 3: Valid input, base 16 (hexadecimal)
//     char *str3 = "1A3";
//     char *base3 = "0123456789ABCDEF";
//     printf("Test Case 3: %d\n", ft_atoi_base(str3, base3)); // Expected output: 419

//     // Test Case 4: Invalid base (base contains duplicate characters)
//     char *str4 = "12345";
//     char *base4 = "0123456789AA";
//     printf("Test Case 4: %d\n", ft_atoi_base(str4, base4)); // Expected output: 0

//     // Test Case 5: Invalid input (empty base)
//     char *str5 = "12345";
//     char *base5 = "";
//     printf("Test Case 5: %d\n", ft_atoi_base(str5, base5)); // Expected output: 0

//     // Test Case 6: Invalid input (base contains invalid characters)
//     char *str6 = "12345";
//     char *base6 = "0123456789+abc";
//     printf("Test Case 6: %d\n", ft_atoi_base(str6, base6)); // Expected output: 0

//     // Test Case 7: Valid input, base 62 (alphanumeric)
//     char *str7 = "AAZZ";
//     char *base7 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
//     printf("Test Case 7: %d\n", ft_atoi_base(str7, base7)); // Expected output: 384753537

//     // Test Case 8: Input string with leading whitespace
//     char *str8 = "   12345";
//     char *base8 = "0123456789";
//     printf("Test Case 8: %d\n", ft_atoi_base(str8, base8)); // Expected output: 12345

//     // Test Case 9: Input string with leading signs and whitespace
//     char *str9 = " ---+--+12345";
//     char *base9 = "0123456789";
//     printf("Test Case 9: %d\n", ft_atoi_base(str9, base9)); // Expected output: -12345

//     // Test Case 10: Input string with invalid characters
//     char *str10 = "12345abc";
//     char *base10 = "0123456789";
//     printf("Test Case 10: %d\n", ft_atoi_base(str10, base10)); // Expected output: 0

//     return 0;
// }
