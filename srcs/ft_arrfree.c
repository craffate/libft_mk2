/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 08:02:50 by craffate          #+#    #+#             */
/*   Updated: 2017/10/13 08:03:05 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrfree(char **arr)
{
	unsigned int	idx;

	idx = -1u;
	if (!arr)
		return ;
	while (arr[++idx])
		free(arr[idx]);
	free(arr);
}
