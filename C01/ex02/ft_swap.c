/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:07:09 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/04 21:47:52 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
void    ft_swap(int *a, int *b)
{
	int temp;

	printf("before swap:\n");
	printf("a: %d\n", *a);
	printf("b: %d\n", *b);
	printf("temp: %d\n", temp);

	temp = *a;
	*a = *b;
	*b = temp;

	printf("after swap:\n");
	printf("a: %d\n", *a);
	printf("b: %d\n", *b);
	printf("temp: %d\n", temp);
}

int main(void)
{
	int	x;
	int y;
	int* x_addr = &x;
	int* y_addr = &y;

	x = 10;
	y = 20;

	ft_swap(x_addr, y_addr);
	return (0);
}
*/