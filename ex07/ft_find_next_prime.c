/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:17:25 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/04/02 18:18:34 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	nx_prime;
	int	div;

	nx_prime = nb;
	div = 2;
	if (nb < 2)
		return (2);
	while (div < nx_prime)
	{
		if (nx_prime % div == 0)
		{
			nx_prime += (nx_prime % 2) + 1;
			div = 2;
		}
		div += 1;
	}
	return (nx_prime);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("next prime :%d\n", ft_find_next_prime(157));
}
*/
