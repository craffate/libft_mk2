/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/13 08:03:24 by craffate          #+#    #+#             */
/*   Updated: 2017/10/13 08:16:03 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wcast-qual"

void	ft_arrpush(char ***arr, const char *s)
{
	char	**arr_tmp;
	size_t	si;

	arr_tmp =
	((si = ft_arrlen((const char **)*arr)) % MALLOCSIZE_ARR) ? *arr :
	(char **)malloc(sizeof(char *) * (si + MALLOCSIZE_ARR + 1));
	arr_tmp[si] = ft_strdup((char *)s);
	arr_tmp[si + 1] = NULL;
	if (arr_tmp == *arr)
		return ;
	while (si--)
		arr_tmp[si] = ft_strdup((*arr)[si]);
	ft_arrfree(*arr);
	*arr = arr_tmp;
}

#pragma clang diagnostic pop
