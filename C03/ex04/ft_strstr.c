/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:28:49 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/12 15:47:41 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	cal_length(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
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
	if (cal_length(str) == 0)
		return (NULL);
	return (to_match(i, j, str, to_find));
}
