/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:16:17 by truello           #+#    #+#             */
/*   Updated: 2023/08/31 14:15:22 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb >= 2147483423)
		return (nb);
	i = 0;
	if (nb > 0)
		i = nb;
	while (i < 2147483423 && !ft_is_prime(i))
		i++;
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Prochain nombre premier de %d : %d\n", 4, ft_find_next_prime(4));
	printf("Prochain nombre premier de %d : %d\n", 16, ft_find_next_prime(16));
	printf("Prochain nombre premier de %d : %d\n", 256, ft_find_next_prime(256));
	printf("Prochain nombre premier de %d : %d\n", 0, ft_find_next_prime(0));
	printf("Prochain nombre premier de %d : %d\n", -2, ft_find_next_prime(-2));
	return (0);
}*/
