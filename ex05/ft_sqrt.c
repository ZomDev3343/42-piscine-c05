/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:13:49 by truello           #+#    #+#             */
/*   Updated: 2023/08/31 13:01:23 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = nb - 1;
	if (nb > 46340 * 46340 || nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (r * r != nb && r > 0)
		r--;
	return (r);
}
/*
int	main(void)
{
	printf("sqrt de %d : %d\n", 16, ft_sqrt(16));	
	printf("sqrt de %d : %d\n", 9, ft_sqrt(9));	
	printf("sqrt de %d : %d\n", 81, ft_sqrt(81));	
	printf("sqrt de %d : %d\n", 49, ft_sqrt(49));	
	printf("sqrt de %d : %d\n", 25, ft_sqrt(25));	
	printf("sqrt de %d : %d\n", 256, ft_sqrt(256));
	printf("sqrt de %d : %d\n", 98, ft_sqrt(98));
	printf("sqrt de %d : %d\n", 121, ft_sqrt(121));
	printf("sqrt de %d : %d\n", 289, ft_sqrt(289));
	printf("sqrt de %d : %d\n", 676, ft_sqrt(676));
	printf("sqrt de %d : %d\n", 1, ft_sqrt(1));
	printf("sqrt de %d : %d\n", 1089, ft_sqrt(1089));
	return (0);
}*/
