/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:04:52 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/14 14:02:24 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		if (*i >= 97 && *i <= 122)
		{
			*i = *i - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
