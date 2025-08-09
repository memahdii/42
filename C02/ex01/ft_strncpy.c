/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:10:01 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/07 17:27:20 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Manual testing:
add this between the while loops:
dest[i] = '\0';
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main() {
//    char src[] = "sourcesourcesourcesousourcesourcesourcerce";
//    char dest[10]; 
//    printf("dest: %s\n", ft_strncpy(dest, src, 10));
//    return 0;
// }