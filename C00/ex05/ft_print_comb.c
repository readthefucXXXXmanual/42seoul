/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilee <ilee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 20:56:16 by ilee              #+#    #+#             */
/*   Updated: 2020/07/06 21:06:29 by ilee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char num[3];

	num[0] = '0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, &num[0], 1);
				write(1, &num[1], 1);
				write(1, &num[2], 1);
				if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
				{
					write(1, &",", 1);
					write(1, &" ", 1);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}