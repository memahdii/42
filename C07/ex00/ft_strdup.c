/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:14:39 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/20 14:27:57 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_len(src);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	return (ft_strcpy(dup, src));
}
// int main(void)
// {
// 	printf("%s\n", ft_strdup("test"));
//	free(dup);
// 	return(0);
// }