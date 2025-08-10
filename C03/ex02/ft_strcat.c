/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:08:49 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/09 23:28:46 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	src_len;
	int	dest_len;
	int	total_len;

	src_len = cal_length(src);
	dest_len = cal_length(dest);
	total_len = src_len + dest_len;
	i = 0;
	while (dest_len <= total_len)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
