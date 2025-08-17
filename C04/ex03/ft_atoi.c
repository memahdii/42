/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:09:23 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/15 21:03:45 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_minus(int number, int minus_count)
{
	if (minus_count % 2 != 0)
		number = number * -1;
	return (number);
}

int	ft_atoi(char *str)
{
	int	minus_count;
	int	i;
	int	number;
	int	result;

	i = 0;
	minus_count = 0;
	number = 0;
	while (str[i] == '-' || str[i] == '+' || str[i] == ' '
		|| (str[i] >= '\t' && str[i] <= '\r'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (is_digit(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	result = is_minus(number, minus_count);
	return (result);
}

// int	main(void)
// {
// 	// char	i[] = "----+++---564589 8989";
// 	// char	i[] = "----5645 898989";
// 	// char	i[] = "   -9";
// 	// char	i[] = "9990";
// 	int		num = ft_atoi(i);
// 	printf("%d\n", num);
// }
