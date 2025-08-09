/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:34:17 by wehan             #+#    #+#             */
/*   Updated: 2025/08/04 18:14:22 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

// writting the char B or ' ' in between
void	print_char_n_times(int number, char character)
{
	while (number > 0)
	{
		ft_putchar(character);
		number--;
	}
}

/*
writting first row:
1: handle edge cases
2: writting B in the middle of Horizontal line	
*/
void	print_first_row(int leng)
{
	ft_putchar('A');
	if (leng == 2)
		ft_putchar('A');

	if (leng >= 3)
	{
		print_char_n_times(leng - 2, 'B' );
		ft_putchar('A');
	}
	ft_putchar('\n');
}

/*
writting last row:
1: handle edge cases
2: writting B in the middle of Horizontal line	
*/
void	print_last_row(int leng)
{
	ft_putchar('C');
	if (leng == 2)
		ft_putchar('C');

	if (leng >= 3)
	{
		print_char_n_times(leng - 2, 'B' );
		ft_putchar('C');
	}
	ft_putchar('\n');
}

/*
writting middle row:
1: handle edge cases
2: writting ' ' in the middle of Horizontal line	
*/
void	print_middle_rows(int leng)
{
	ft_putchar('B');
	if (leng == 2)
		ft_putchar('B');
	if (leng >= 3)
	{	
		print_char_n_times(leng - 2, ' ' );
		ft_putchar('B');
	}	
	ft_putchar('\n');
}

/*
starting point:
1: check if the inputs are 0 or negetive
2: write first line
3: write middle lines if there is any
4: write last line if there is any
*/
int	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (1);
	}
	if (y >= 1)
		print_first_row(x);

	if (y >= 3)
	{
		while (y - 2 > 0)
		{
			print_middle_rows(x);
			y--;
		}
	}
	if (y >= 2)
		print_last_row(x);
	return (0);
}		
