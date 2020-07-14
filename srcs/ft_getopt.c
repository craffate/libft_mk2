/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craffate <craffate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:10:56 by craffate          #+#    #+#             */
/*   Updated: 2020/07/14 11:42:50 by craffate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_getopt(int nargc, char **nargv, const char *ostr)
{
	int					ret;
	static int			idx;
	char				*ptr;

	idx = idx ? idx + 1 : 1;
	ptr = idx < nargc ? nargv[idx] : NULL;
	ret = ptr ? '?' : -1;
	if (ret == '?' && *ptr == '-')
	{
		ptr = ft_strchr(ostr, *(ptr + 1));
		if (ptr)
		{
			if (*(ptr + 1) == ':')
			{
				if (++idx < nargc && *nargv[idx] != '-')
					ret = *ptr;
			}
			else
				ret = *ptr;
		}
	}
	return (ret);
}
