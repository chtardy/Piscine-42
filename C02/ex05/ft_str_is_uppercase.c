/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:40:40 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/14 11:53:49 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		if (*i >= 65 && *i <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}