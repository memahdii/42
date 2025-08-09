/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:14:54 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/05 17:37:37 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = size - 1;
	while (i >= 0)
	{
		temp = tab[i];
		tab[i] = tab[i - 1];
		tab[i] = temp;
		printf("%d\n", tab[i]);
		i--;
	}
}

// int main(void)
// {
//     int my_arr[] = {0,1,2,3,4,5,6,7,8,9, 10, 11, 12, 133};
//     int *addr_of_arr = &my_arr;
//     int length = sizeof(my_arr) / sizeof(my_arr[0]);
//     ft_rev_int_tab(addr_of_arr, length);

//     return (0);
// }