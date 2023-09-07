/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:16:17 by truello           #+#    #+#             */
/*   Updated: 2023/09/07 10:04:49 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) == 0)
	{
		nb += 2;
	}
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
printf("Prochain nombre premier de %d : %d\n", 4, ft_find_next_prime(4));
printf("Prochain nombre premier de %d : %d\n", 16, ft_find_next_prime(16));
printf("Prochain nombre premier de %d : %d\n", 0, ft_find_next_prime(0));
return (0);
}*/
