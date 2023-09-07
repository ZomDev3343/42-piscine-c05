/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:01:28 by truello           #+#    #+#             */
/*   Updated: 2023/09/05 14:42:34 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		r *= nb;
	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	printf("5 pow 4 : %d\n", ft_iterative_power(5, 4));
	printf("6 pow 1 : %d\n", ft_iterative_power(6, 1));
	printf("2 pow 8 : %d\n", ft_iterative_power(2, 8));
	printf("3 pow 0 : %d\n", ft_iterative_power(3, 0));
	printf("3 pow -1 : %d\n", ft_iterative_power(3, -1));
	return (0);
}*/
