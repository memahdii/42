/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:39:01 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/04 21:57:15 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
add this to test:
printf("div: %d\nmod: %d\n", *a, *b);
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// int main(void)
// {
//     int	x;
// 	int y;
// 	int* x_addr = &x;
// 	int* y_addr = &y;

// 	x = 12;
// 	y = 10;

// 	ft_ultimate_div_mod(x_addr, y_addr);
//     return (0);
// }
