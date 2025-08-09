/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:22:56 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/04 21:49:23 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Add this at the end of this function to test it.

printf("a: %d b: %d divition: %d mod:%d\n", a, b, *div, *mod);
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
	int a = 12, b = 10;
	int div, mod;

	int* addr_div = &div;
	int* addr_mod = &mod;

	ft_div_mod(a, b, addr_div, addr_mod);
}
*/