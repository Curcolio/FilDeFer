/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccorazza <ccorazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/19 15:43:22 by ccorazza          #+#    #+#             */
/*   Updated: 2014/04/19 19:40:14 by ccorazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		(*f) (s + i);
		i++;
	}
}