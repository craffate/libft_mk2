/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 06:00:36 by craffate          #+#    #+#             */
/*   Updated: 2017/09/17 06:03:18 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int		ft_sqrt(const int nb)
{
	int		i;
	int		sqrt;

	if (!nb)
		return (0);
	i = 1;
	sqrt = 1;
	while (i * i < nb)
		++i;
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
}
