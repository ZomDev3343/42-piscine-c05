/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:05:42 by truello           #+#    #+#             */
/*   Updated: 2023/09/06 16:44:21 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	r;

	r = nb - 1;
	if (nb < 0 || nb > 46340 * 46340)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (r * r != nb && r > 0)
		r--;
	return (r);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1 || nb < 0 || (nb % 2 == 0 && nb != 2))
		return (0);
	i = ft_sqrt(nb);
	if (i == 0)
		i = nb - 2;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i -= 2;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d Premier ? : %d\n", 17, ft_is_prime(17));
	printf("%d Premier ? : %d\n", 9, ft_is_prime(9));
	printf("%d Premier ? : %d\n", 1, ft_is_prime(1));
	printf("%d Premier ? : %d\n", 0, ft_is_prime(0));
	printf("%d Premier ? : %d\n", -1, ft_is_prime(-1));
	printf("sqrt de 4000960 : %d\n", ft_sqrt(4000960));
	printf("%d Premier ? : %d\n", 4000960, ft_is_prime(4000960));
	return (0);
}*/
