/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:38:57 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/20 14:28:22 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*storage;
	int	length;
	int	i;

	length = max - min;
	if (length <= 0)
		return (NULL);
	storage = (int *)malloc(sizeof(int) * length);
	if (storage == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		storage[i] = min;
		min++;
		i++;
	}
	return (storage);
}
// int main(void)
// {
// 	int *s = ft_range(1,10);
// 	for (int i=0; s[i] != '\0'; i++)
// 		printf("%d\n", s[i]);
//	free(storage);
// 	return (0);
// }