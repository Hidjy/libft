/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laime <laime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:19:22 by laime             #+#    #+#             */
/*   Updated: 2014/11/09 16:53:01 by laime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int n, int pow)
{
	int	out;

	out = n;
	if (pow == 0)
		return (1);
	while (--pow)
		out *= n;
	return (out);
}