/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:53:19 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/09 21:08:25 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cal_length(char *str);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				val;
	unsigned int	i;

	i = 0;
	while (i != n)
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
