/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:29:44 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/09 20:52:28 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cal_length(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	int	s1_len;
	int	s2_len;
	int	val;
	int	i;

	s1_len = cal_length(s1);
	s2_len = cal_length(s2);
	if (s2_len > s1_len)
	{
		val = s2[s2_len -1];
		return (-val);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			return (val);
		}
		i++;
	}
	return (0);
}

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
