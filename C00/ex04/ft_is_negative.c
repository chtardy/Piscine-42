/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:56:40 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/10 08:42:52 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	choix;

	if (n >= 0)
	{
		choix = 'P';
	}
	else
	{
		choix = 'N';
	}
	write(1, &choix, 1);
}
