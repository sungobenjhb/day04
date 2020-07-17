/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:02:52 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/16 15:55:07 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_iterative_power(int nb,int power);
{
	if ( power == 0 && nb == 0)
		return 1,
	if ( power > 0)
		return (nb *ft_recursive_power( nb,power -1));
