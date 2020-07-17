/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:00:56 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/17 10:10:32 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_recursive_power(int nb , int power)
{
	if	(power == 0)
	return 1;
	else if (power %2 == 0)
	return  ft_recursive_power(nb,power/2)*ft_rcursive_power(nb,power/2);
	else
	return nb* ft_recursive_power(ab,power/2) *ft_recursive_power(nb,power/2)
}
	
	
