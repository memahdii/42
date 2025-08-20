/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:21:31 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/20 14:29:15 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*storage;
	int	length;
	int	i;

	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	storage = (int *)malloc(sizeof(int) * length);
	if (storage == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < length)
	{
		storage[i] = min;
		min++;
		i++;
	}
	*range = storage;
	return (length);
}
// int main(void)
// {
// 	int *s;
// 	int min = 1;
// 	int max = 10;
// 	s = ft_ultimate_range(&s, min, max);
// 	printf("%d", s);
//	free(storage);
// 	return (0);
// }