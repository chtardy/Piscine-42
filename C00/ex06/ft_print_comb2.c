/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 09:59:07 by ctardy            #+#    #+#             */
/*   Updated: 2021/09/11 13:35:52 by ctardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print(n1 / 10 + '0');
			print(n1 % 10 + '0');
			print(' ');
			print(n2 / 10 + '0');
			print(n2 % 10 + '0');
			n2++;
			if (n1 != 98)
			{
				print(',');
				print(' ');
			}
		}
		n1++;
	}
}