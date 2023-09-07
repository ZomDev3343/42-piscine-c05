/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truello <thomasdelan2@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:07:33 by truello           #+#    #+#             */
/*   Updated: 2023/09/05 14:43:06 by truello          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*#include <stdio.h>
int	main(void)
{
	printf("Fib(2) : %d\n", ft_fibonacci(2));
	printf("Fib(5) : %d\n", ft_fibonacci(5));
	printf("Fib(10) : %d\n", ft_fibonacci(10));
	printf("Fib(0) : %d\n", ft_fibonacci(0));
	printf("Fib(-1) : %d\n", ft_fibonacci(-1));
	return (0);
}*/
