/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:41:35 by truello           #+#    #+#             */
/*   Updated: 2023/09/07 10:05:41 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	if (nb < 0)
		return (0);
	r = 1;
	while (nb > 1)
		r *= nb--;
	return (r);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Factorial de %d : %d\n", 0, ft_iterative_factorial(1));
	return (0);
}*/
