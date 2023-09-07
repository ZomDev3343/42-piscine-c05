/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:59:28 by truello           #+#    #+#             */
/*   Updated: 2023/09/05 14:42:46 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main(void)
{
	printf("5 pow 4 : %d\n", ft_recursive_power(5, 4));
	printf("6 pow 1 : %d\n", ft_recursive_power(6, 1));
	printf("2 pow 8 : %d\n", ft_recursive_power(2, 8));
	printf("3 pow 0 : %d\n", ft_recursive_power(3, 0));
	printf("3 pow -1 : %d\n", ft_recursive_power(3, -1));
	return (0);
	return (0);
}*/
