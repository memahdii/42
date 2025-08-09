/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:27:18 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/05 20:18:59 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
add this loop to ft_sort_int_tab() to test the code:
for (int k=0; k<=size; k++)
	{
		printf("%d\n", tab[k]);
	}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (tab[j] < tab[j - 1])
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			j++;
		}
		i++;
	}
}

// int main(void)
// {
//     int my_arr[] = {19, 12, 13, 6, 15, 122, 1221, 133, 98888888, 2, 66, 3};
//     int *addr_of_arr = &my_arr;
//     int length = sizeof(my_arr) / sizeof(my_arr[0]);
//     ft_sort_int_tab(addr_of_arr, length - 1);
//     return (0);
// }