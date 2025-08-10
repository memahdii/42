/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 23:32:38 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/10 16:58:42 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	cal_length(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	*to_match(int i, int j, char *str, char *to_find)
{
	int	first_char;

	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			first_char = i;
			while (j < cal_length(to_find))
			{
				if (str[i] == to_find[j])
					i++;
				else
					break ;
				j++;
			}
			if (j == cal_length(to_find))
				return (&str[first_char]);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (cal_length(to_find) == 0)
		return (&str[0]);
	return (to_match(i, j, str, to_find));
}

// int main(void)
// {
//     char str[] = "testMahdi";
//     char to_find[] = "st";
//     printf("%s", ft_strstr(str, to_find));
//     return (0);
// }