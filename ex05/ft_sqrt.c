/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgomes-d <rgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:54:29 by rgomes-d          #+#    #+#             */
/*   Updated: 2025/04/02 18:18:23 by rgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	odd;
	int	value;
	int	i;

	odd = 1;
	value = 0;
	i = 0;
	while (value < nb)
	{
		value += odd;
		odd += 2;
		i++;
	}
	if (value != nb)
		return (0);
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("square : %d\n", ft_sqrt(-1));
}
*/
